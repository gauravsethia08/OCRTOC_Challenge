; Auto-generated. Do not edit!


(cl:in-package haf_grasping-msg)


;//! \htmlinclude CalcGraspPointsServerGoal.msg.html

(cl:defclass <CalcGraspPointsServerGoal> (roslisp-msg-protocol:ros-message)
  ((graspinput
    :reader graspinput
    :initarg :graspinput
    :type haf_grasping-msg:GraspInput
    :initform (cl:make-instance 'haf_grasping-msg:GraspInput)))
)

(cl:defclass CalcGraspPointsServerGoal (<CalcGraspPointsServerGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CalcGraspPointsServerGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CalcGraspPointsServerGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name haf_grasping-msg:<CalcGraspPointsServerGoal> is deprecated: use haf_grasping-msg:CalcGraspPointsServerGoal instead.")))

(cl:ensure-generic-function 'graspinput-val :lambda-list '(m))
(cl:defmethod graspinput-val ((m <CalcGraspPointsServerGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader haf_grasping-msg:graspinput-val is deprecated.  Use haf_grasping-msg:graspinput instead.")
  (graspinput m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CalcGraspPointsServerGoal>) ostream)
  "Serializes a message object of type '<CalcGraspPointsServerGoal>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'graspinput) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CalcGraspPointsServerGoal>) istream)
  "Deserializes a message object of type '<CalcGraspPointsServerGoal>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'graspinput) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CalcGraspPointsServerGoal>)))
  "Returns string type for a message object of type '<CalcGraspPointsServerGoal>"
  "haf_grasping/CalcGraspPointsServerGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CalcGraspPointsServerGoal)))
  "Returns string type for a message object of type 'CalcGraspPointsServerGoal"
  "haf_grasping/CalcGraspPointsServerGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CalcGraspPointsServerGoal>)))
  "Returns md5sum for a message object of type '<CalcGraspPointsServerGoal>"
  "8c521947ebce668f8c8bdb6ccc835205")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CalcGraspPointsServerGoal)))
  "Returns md5sum for a message object of type 'CalcGraspPointsServerGoal"
  "8c521947ebce668f8c8bdb6ccc835205")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CalcGraspPointsServerGoal>)))
  "Returns full string definition for message of type '<CalcGraspPointsServerGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define the input for grasp calculation: a point cloud~%haf_grasping/GraspInput graspinput~%~%================================================================================~%MSG: haf_grasping/GraspInput~%~%#Header header                        	# header for time/frame information~%sensor_msgs/PointCloud2 input_pc     	# defines the point cloud on which grasps should be calculated (objects)~%string goal_frame_id				 	# the frame_id to which the point cloud should be transformed before grasps are calculated~%geometry_msgs/Point grasp_area_center 	# center of the region where grasps are searched~%float32 grasp_area_length_x				# defines the length of the rectangle (in x direction (in m)) where grasps are searched (with center grasp_area_center)~%float32 grasp_area_length_y				# defines the length of the rectangle (in y direction (in m)) where grasps are searched (with center grasp_area_center)~%~%~%duration max_calculation_time			# maximal calculation time before grasp result is returned~%bool show_only_best_grasp				# If true, only the best grasp is shown in visualization~%int32 threshold_grasp_evaluation		# defines the threshold for return_first_grasp_over_th if it is set to true (otherwise it is ignored)~%~%geometry_msgs/Vector3 approach_vector	# defines the direction from where a grasp should be executed ~%int32 gripper_opening_width				# defines the factor (actually 1/factor) that is used for pre-grasp opening gripper width ~%~%#geometry_msgs/Vector3 scale_gripper	# Scale of the gripper in x and y direction if it deviates from a gripper of the size of a huMAN hand~%~%~%================================================================================~%MSG: sensor_msgs/PointCloud2~%# This message holds a collection of N-dimensional points, which may~%# contain additional information such as normals, intensity, etc. The~%# point data is stored as a binary blob, its layout described by the~%# contents of the \"fields\" array.~%~%# The point cloud data may be organized 2d (image-like) or 1d~%# (unordered). Point clouds organized as 2d images may be produced by~%# camera depth sensors such as stereo or time-of-flight.~%~%# Time of sensor data acquisition, and the coordinate frame ID (for 3d~%# points).~%Header header~%~%# 2D structure of the point cloud. If the cloud is unordered, height is~%# 1 and width is the length of the point cloud.~%uint32 height~%uint32 width~%~%# Describes the channels and their layout in the binary data blob.~%PointField[] fields~%~%bool    is_bigendian # Is this data bigendian?~%uint32  point_step   # Length of a point in bytes~%uint32  row_step     # Length of a row in bytes~%uint8[] data         # Actual point data, size is (row_step*height)~%~%bool is_dense        # True if there are no invalid points~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: sensor_msgs/PointField~%# This message holds the description of one point entry in the~%# PointCloud2 message format.~%uint8 INT8    = 1~%uint8 UINT8   = 2~%uint8 INT16   = 3~%uint8 UINT16  = 4~%uint8 INT32   = 5~%uint8 UINT32  = 6~%uint8 FLOAT32 = 7~%uint8 FLOAT64 = 8~%~%string name      # Name of field~%uint32 offset    # Offset from start of point struct~%uint8  datatype  # Datatype enumeration, see above~%uint32 count     # How many elements in the field~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CalcGraspPointsServerGoal)))
  "Returns full string definition for message of type 'CalcGraspPointsServerGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define the input for grasp calculation: a point cloud~%haf_grasping/GraspInput graspinput~%~%================================================================================~%MSG: haf_grasping/GraspInput~%~%#Header header                        	# header for time/frame information~%sensor_msgs/PointCloud2 input_pc     	# defines the point cloud on which grasps should be calculated (objects)~%string goal_frame_id				 	# the frame_id to which the point cloud should be transformed before grasps are calculated~%geometry_msgs/Point grasp_area_center 	# center of the region where grasps are searched~%float32 grasp_area_length_x				# defines the length of the rectangle (in x direction (in m)) where grasps are searched (with center grasp_area_center)~%float32 grasp_area_length_y				# defines the length of the rectangle (in y direction (in m)) where grasps are searched (with center grasp_area_center)~%~%~%duration max_calculation_time			# maximal calculation time before grasp result is returned~%bool show_only_best_grasp				# If true, only the best grasp is shown in visualization~%int32 threshold_grasp_evaluation		# defines the threshold for return_first_grasp_over_th if it is set to true (otherwise it is ignored)~%~%geometry_msgs/Vector3 approach_vector	# defines the direction from where a grasp should be executed ~%int32 gripper_opening_width				# defines the factor (actually 1/factor) that is used for pre-grasp opening gripper width ~%~%#geometry_msgs/Vector3 scale_gripper	# Scale of the gripper in x and y direction if it deviates from a gripper of the size of a huMAN hand~%~%~%================================================================================~%MSG: sensor_msgs/PointCloud2~%# This message holds a collection of N-dimensional points, which may~%# contain additional information such as normals, intensity, etc. The~%# point data is stored as a binary blob, its layout described by the~%# contents of the \"fields\" array.~%~%# The point cloud data may be organized 2d (image-like) or 1d~%# (unordered). Point clouds organized as 2d images may be produced by~%# camera depth sensors such as stereo or time-of-flight.~%~%# Time of sensor data acquisition, and the coordinate frame ID (for 3d~%# points).~%Header header~%~%# 2D structure of the point cloud. If the cloud is unordered, height is~%# 1 and width is the length of the point cloud.~%uint32 height~%uint32 width~%~%# Describes the channels and their layout in the binary data blob.~%PointField[] fields~%~%bool    is_bigendian # Is this data bigendian?~%uint32  point_step   # Length of a point in bytes~%uint32  row_step     # Length of a row in bytes~%uint8[] data         # Actual point data, size is (row_step*height)~%~%bool is_dense        # True if there are no invalid points~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: sensor_msgs/PointField~%# This message holds the description of one point entry in the~%# PointCloud2 message format.~%uint8 INT8    = 1~%uint8 UINT8   = 2~%uint8 INT16   = 3~%uint8 UINT16  = 4~%uint8 INT32   = 5~%uint8 UINT32  = 6~%uint8 FLOAT32 = 7~%uint8 FLOAT64 = 8~%~%string name      # Name of field~%uint32 offset    # Offset from start of point struct~%uint8  datatype  # Datatype enumeration, see above~%uint32 count     # How many elements in the field~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CalcGraspPointsServerGoal>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'graspinput))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CalcGraspPointsServerGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'CalcGraspPointsServerGoal
    (cl:cons ':graspinput (graspinput msg))
))
