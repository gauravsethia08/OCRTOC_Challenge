; Auto-generated. Do not edit!


(cl:in-package ocrtoc_task-msg)


;//! \htmlinclude CleanFeedback.msg.html

(cl:defclass <CleanFeedback> (roslisp-msg-protocol:ros-message)
  ((text
    :reader text
    :initarg :text
    :type cl:string
    :initform ""))
)

(cl:defclass CleanFeedback (<CleanFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CleanFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CleanFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ocrtoc_task-msg:<CleanFeedback> is deprecated: use ocrtoc_task-msg:CleanFeedback instead.")))

(cl:ensure-generic-function 'text-val :lambda-list '(m))
(cl:defmethod text-val ((m <CleanFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocrtoc_task-msg:text-val is deprecated.  Use ocrtoc_task-msg:text instead.")
  (text m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CleanFeedback>) ostream)
  "Serializes a message object of type '<CleanFeedback>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'text))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'text))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CleanFeedback>) istream)
  "Deserializes a message object of type '<CleanFeedback>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'text) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'text) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CleanFeedback>)))
  "Returns string type for a message object of type '<CleanFeedback>"
  "ocrtoc_task/CleanFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CleanFeedback)))
  "Returns string type for a message object of type 'CleanFeedback"
  "ocrtoc_task/CleanFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CleanFeedback>)))
  "Returns md5sum for a message object of type '<CleanFeedback>"
  "74697ed3d931f6eede8bf3a8dfeca160")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CleanFeedback)))
  "Returns md5sum for a message object of type 'CleanFeedback"
  "74697ed3d931f6eede8bf3a8dfeca160")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CleanFeedback>)))
  "Returns full string definition for message of type '<CleanFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# feedback~%string text~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CleanFeedback)))
  "Returns full string definition for message of type 'CleanFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# feedback~%string text~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CleanFeedback>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'text))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CleanFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'CleanFeedback
    (cl:cons ':text (text msg))
))
