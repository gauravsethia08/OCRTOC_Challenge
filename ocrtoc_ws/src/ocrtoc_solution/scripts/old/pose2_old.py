#!/usr/bin/env python

import open3d 
import open3d as o3d
import numpy as np
from ctypes import * # convert float to uint32
import message_filters
import rospy
from std_msgs.msg import Header
from sensor_msgs.msg import PointCloud2, PointField
import sensor_msgs.point_cloud2 as pc2
import copy
import tf 
import time
from tf.transformations import * 
import math
import tf2_ros
import tf2_geometry_msgs
from geometry_msgs.msg import * 


def convertCloudFromOpen3dToRos(open3d_cloud, frame_id="world"):
    # Set "header"
    header = Header()
    header.stamp = rospy.Time.now()
    header.frame_id = frame_id

    # Set "fields" and "cloud_data"
    points=np.asarray(open3d_cloud.points)
    if not open3d_cloud.colors: # XYZ only
        fields=FIELDS_XYZ
        cloud_data=points
    else: # XYZ + RGB
        fields=FIELDS_XYZRGB
        # -- Change rgb color from "three float" to "one 24-byte int"
        # 0x00FFFFFF is white, 0x00000000 is black.
        colors = np.floor(np.asarray(open3d_cloud.colors)*255) # nx3 matrix
        colors = colors[:,0] * BIT_MOVE_16 +colors[:,1] * BIT_MOVE_8 + colors[:,2]  
        cloud_data=np.c_[points, colors]
    
    # create ros_cloud
    return pc2.create_cloud(header, fields, cloud_data)

def draw_registration_result(source, target, transformation):
    source_temp = copy.deepcopy(source)
    target_temp = copy.deepcopy(target)
    #source_temp.paint_uniform_color([1, 0.706, 0])
    #target_temp.paint_uniform_color([0, 0.651, 0.929])
    source_temp.transform(transformation)
    o3d.visualization.draw_geometries([source_temp, target_temp]) # ,zoom=0.4559,front=[0.6452, -0.3036, -0.7011],lookat=[1.9892, 2.0208, 1.8945],up=[-0.2779, -0.9482, 0.1556])

def preprocess_point_cloud(pcd, voxel_size):
    print(":: Downsample with a voxel size %.3f." % voxel_size)
    pcd_down =  o3d.geometry.voxel_down_sample(pcd, voxel_size)

    radius_normal = voxel_size * 2
    print(":: Estimate normal with search radius %.3f." % radius_normal)
    o3d.geometry.estimate_normals(pcd_down,o3d.geometry.KDTreeSearchParamHybrid(radius=radius_normal, max_nn=30))

    radius_feature = voxel_size * 5
    print(":: Compute FPFH feature with search radius %.3f." % radius_feature)
    pcd_fpfh = o3d.registration.compute_fpfh_feature(pcd_down,o3d.geometry.KDTreeSearchParamHybrid(radius=radius_feature, max_nn=100))
    return pcd_down, pcd_fpfh
    
def transform_frames():
	listener = tf.TransformListener()
	rospy.sleep(2)
	trans1,quat1 =listener.lookupTransform("world","kinect_optical_frame",rospy.Time())

	htm1 = tf.transformations.quaternion_matrix(quat1)

	for i in range(0,3):
		htm1[i][3] = trans1[i]

	return htm1

def prepare_dataset(voxel_size, transform):
    print(":: Load two point clouds and disturb initial pose.")
    source = o3d.io.read_point_cloud("/home/kaushik/PCD/pmc.ply") #/home/kaushik/Open3D/examples/test_data/ICP/cloud_bin_0.pcd
    target = o3d.io.read_point_cloud("/home/kaushik/PCD/1-1_initial.pcd") #/home/kaushik/object2.pcd
    trans_init = np.asarray([[1.0, 0.0, 0.0, 0.0], [0.0, 1.0, 0.0, 0.0],
                             [0.0, 0.0, 1.0, 0.0], [0.0, 0.0, 0.0, 1.0]])
                             
    #source.transform(transform)
    target.transform(transform)
    #source.translate(np.array([0.21753332018852234, -0.042507998645305634, 0.011399304494261742]))

    draw_registration_result(source, target, np.identity(4))

    source_down, source_fpfh = preprocess_point_cloud(source, voxel_size)
    target_down, target_fpfh = preprocess_point_cloud(target, voxel_size)
    return source, target, source_down, target_down, source_fpfh, target_fpfh


def execute_global_registration(source_down, target_down, source_fpfh,
                                target_fpfh, voxel_size):
    distance_threshold = voxel_size * 1.5
    print(":: RANSAC registration on downsampled point clouds.")
    print("   Since the downsampling voxel size is %.3f," % voxel_size)
    print("   we use a liberal distance threshold %.3f." % distance_threshold)
    result = o3d.registration.registration_ransac_based_on_feature_matching(
        source_down, target_down, source_fpfh, target_fpfh, distance_threshold,
        o3d.registration.TransformationEstimationPointToPoint(True),
        4, [
            o3d.registration.CorrespondenceCheckerBasedOnEdgeLength(
                0.9),
            o3d.registration.CorrespondenceCheckerBasedOnDistance(
                distance_threshold)
        ], o3d.registration.RANSACConvergenceCriteria(40000000, 500))
    return result

def transform(x,y,z,x1,y1,z1,w1):
    #q = quaternion_from_euler(r, p, y)
    grasp_pose = geometry_msgs.msg.PoseStamped()
    grasp_pose.header.frame_id = '/kinect_optical_frame'

    grasp_pose.pose.position.x = x
    grasp_pose.pose.position.y = y
    grasp_pose.pose.position.z =z

    grasp_pose.pose.orientation.x = x1#q[0]
    grasp_pose.pose.orientation.y = y1#q[1]
    grasp_pose.pose.orientation.z = z1#q[2]
    grasp_pose.pose.orientation.w = w1#q[3]

    print(type(grasp_pose))
    #transfromed_grasp_pose = transformPose(target_frame, grasp_pose)
    #print(transfromed_grasp_pose)
    tgt_frame = "world"
    src_frame = "kinect_optical_frame"
    transform = tf_buffer.lookup_transform(tgt_frame, src_frame, rospy.Time(0), rospy.Duration(1.0)) #wait for 1 second

    pose_transformed = tf2_geometry_msgs.do_transform_pose(grasp_pose, transform)
    x_p = pose_transformed.pose.position.x
    y_p = pose_transformed.pose.position.y
    z_p = pose_transformed.pose.position.z

    x_or = pose_transformed.pose.orientation.x 
    y_or = pose_transformed.pose.orientation.y 
    z_or = pose_transformed.pose.orientation.z 
    w_or = pose_transformed.pose.orientation.w
    print(x_p,y_p,z_p)
    #print(euler_from_quaternion([x_or,y_or,z_or,w_or]))
    return euler_from_quaternion([x_or,y_or,z_or,w_or])

def htm_to_transform(matrix):
    #Extracting the rotation matrix
    rotation_mat = np.eye(4)
    rotation_mat[:3,:3] = ((matrix[0][0], matrix[0][1], matrix[0][2]),(matrix[1][0], matrix[1][1], matrix[1][2]),(matrix[2][0], matrix[2][1], matrix[2][2]))
    #m[:3,:3] = ((a, b, c), (d, e, f), (g, h, i))
    translation_vec = np.array([matrix[0][3], matrix[1][3], matrix[2][3]])

    euler = tf.transformations.euler_from_matrix(rotation_mat)
    #out = transform(translation_vec[0], translation_vec[1], translation_vec[2], euler[0], euler[1], euler[2], euler[3])
    print(euler)

def refine_registration(source, target, source_fpfh, target_fpfh, voxel_size):
    
    '''
    distance_threshold = voxel_size * 0.4
    result = o3d.registration.registration_fast_based_on_feature_matching(
			source, target, source_fpfh, target_fpfh,
			o3d.registration.FastGlobalRegistrationOption(maximum_correspondence_distance=distance_threshold))
    ''' 
    distance_threshold = voxel_size * 0.4
    print(":: Point-to-plane ICP registration is applied on original point")
    print("   clouds to refine the alignment. This time we use a strict")
    print("   distance threshold %.3f." % distance_threshold)
    result = o3d.registration.registration_icp(source, target, distance_threshold, result_ransac.transformation,
        o3d.registration.TransformationEstimationPointToPlane())
    return result

rospy.init_node('commit_solution')
tf_buffer = tf2_ros.Buffer(rospy.Duration(1200.0)) #tf buffer length
tf_listener = tf2_ros.TransformListener(tf_buffer)
transform = transform_frames()

voxel_size = 0.005  # means 5cm for this dataset
source, target, source_down, target_down, source_fpfh, target_fpfh = prepare_dataset(voxel_size, transform)
result_ransac = execute_global_registration(source_down, target_down,source_fpfh, target_fpfh,voxel_size)
#source_down.transform(result_ransac.transformation)
#o3d.visualization.draw_geometries([source_down, target])
result_icp = refine_registration(source_down, target_down, source_fpfh, target_fpfh,voxel_size)
htm_to_transform(result_ransac.transformation)
draw_registration_result(source, target, result_icp.transformation)