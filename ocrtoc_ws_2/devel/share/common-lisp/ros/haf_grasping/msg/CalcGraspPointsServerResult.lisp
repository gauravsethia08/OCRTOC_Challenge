; Auto-generated. Do not edit!


(cl:in-package haf_grasping-msg)


;//! \htmlinclude CalcGraspPointsServerResult.msg.html

(cl:defclass <CalcGraspPointsServerResult> (roslisp-msg-protocol:ros-message)
  ((graspOutput
    :reader graspOutput
    :initarg :graspOutput
    :type haf_grasping-msg:GraspOutput
    :initform (cl:make-instance 'haf_grasping-msg:GraspOutput)))
)

(cl:defclass CalcGraspPointsServerResult (<CalcGraspPointsServerResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CalcGraspPointsServerResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CalcGraspPointsServerResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name haf_grasping-msg:<CalcGraspPointsServerResult> is deprecated: use haf_grasping-msg:CalcGraspPointsServerResult instead.")))

(cl:ensure-generic-function 'graspOutput-val :lambda-list '(m))
(cl:defmethod graspOutput-val ((m <CalcGraspPointsServerResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader haf_grasping-msg:graspOutput-val is deprecated.  Use haf_grasping-msg:graspOutput instead.")
  (graspOutput m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CalcGraspPointsServerResult>) ostream)
  "Serializes a message object of type '<CalcGraspPointsServerResult>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'graspOutput) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CalcGraspPointsServerResult>) istream)
  "Deserializes a message object of type '<CalcGraspPointsServerResult>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'graspOutput) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CalcGraspPointsServerResult>)))
  "Returns string type for a message object of type '<CalcGraspPointsServerResult>"
  "haf_grasping/CalcGraspPointsServerResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CalcGraspPointsServerResult)))
  "Returns string type for a message object of type 'CalcGraspPointsServerResult"
  "haf_grasping/CalcGraspPointsServerResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CalcGraspPointsServerResult>)))
  "Returns md5sum for a message object of type '<CalcGraspPointsServerResult>"
  "4d60c1e64258adfc60c950e0e4e2bab1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CalcGraspPointsServerResult)))
  "Returns md5sum for a message object of type 'CalcGraspPointsServerResult"
  "4d60c1e64258adfc60c950e0e4e2bab1")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CalcGraspPointsServerResult>)))
  "Returns full string definition for message of type '<CalcGraspPointsServerResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define the result, if succeeded: defines grasp for gripper~%haf_grasping/GraspOutput graspOutput~%~%================================================================================~%MSG: haf_grasping/GraspOutput~%Header header~%int32 eval~%geometry_msgs/Point graspPoint1~%geometry_msgs/Point graspPoint2~%geometry_msgs/Point averagedGraspPoint~%geometry_msgs/Vector3 approachVector~%float32 roll # radians~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CalcGraspPointsServerResult)))
  "Returns full string definition for message of type 'CalcGraspPointsServerResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define the result, if succeeded: defines grasp for gripper~%haf_grasping/GraspOutput graspOutput~%~%================================================================================~%MSG: haf_grasping/GraspOutput~%Header header~%int32 eval~%geometry_msgs/Point graspPoint1~%geometry_msgs/Point graspPoint2~%geometry_msgs/Point averagedGraspPoint~%geometry_msgs/Vector3 approachVector~%float32 roll # radians~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CalcGraspPointsServerResult>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'graspOutput))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CalcGraspPointsServerResult>))
  "Converts a ROS message object to a list"
  (cl:list 'CalcGraspPointsServerResult
    (cl:cons ':graspOutput (graspOutput msg))
))
