#! /usr/bin/env python

#Importing Libraries
import tf
import sys
import copy
import time
import rospy
import tf2_ros
import actionlib
import numpy as np
import moveit_msgs.msg
import message_filters
import moveit_commander
import tf2_geometry_msgs
import geometry_msgs.msg
from std_msgs.msg import String
import xml.etree.ElementTree as ET
from sensor_msgs import point_cloud2
from std_msgs.msg import Header, Int64
from sensor_msgs.msg import PointCloud2
from gazebo_msgs.msg import ContactsState
from visualization_msgs.msg import MarkerArray
from tf.transformations import quaternion_from_euler
from control_msgs.msg import GripperCommandActionGoal
from geometry_msgs.msg import Point, Pose, PointStamped
from moveit_msgs.msg import MoveGroupAction, MoveGroupGoal



moveit_commander.roscpp_initialize(sys.argv)

rospy.init_node('select_grasp_new',anonymous=True)

tf_buffer = tf2_ros.Buffer(rospy.Duration(2000.0)) #tf buffer length
tf_listener = tf2_ros.TransformListener(tf_buffer)
robot = moveit_commander.RobotCommander()
scene = moveit_commander.PlanningSceneInterface()
group = moveit_commander.MoveGroupCommander("arm_controller")
group_1 = moveit_commander.MoveGroupCommander("gripper_controller")
display_trajectory_publisher = rospy.Publisher('/move_group/display_planned_path' , moveit_msgs.msg.DisplayTrajectory,queue_size=20)
scale = 1


# robot_state = robot.get_current_state()

print("hello")
current_pose = group.get_current_pose()
print(current_pose)

'''
names = robot_state.name 
joint_positions = robot_state.position
print("%f %f " % names, joint_positions)
'''
moveit_commander.roscpp_shutdown()

