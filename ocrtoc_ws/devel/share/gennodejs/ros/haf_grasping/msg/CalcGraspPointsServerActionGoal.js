// Auto-generated. Do not edit!

// (in-package haf_grasping.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let CalcGraspPointsServerGoal = require('./CalcGraspPointsServerGoal.js');
let actionlib_msgs = _finder('actionlib_msgs');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class CalcGraspPointsServerActionGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.goal_id = null;
      this.goal = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('goal_id')) {
        this.goal_id = initObj.goal_id
      }
      else {
        this.goal_id = new actionlib_msgs.msg.GoalID();
      }
      if (initObj.hasOwnProperty('goal')) {
        this.goal = initObj.goal
      }
      else {
        this.goal = new CalcGraspPointsServerGoal();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type CalcGraspPointsServerActionGoal
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [goal_id]
    bufferOffset = actionlib_msgs.msg.GoalID.serialize(obj.goal_id, buffer, bufferOffset);
    // Serialize message field [goal]
    bufferOffset = CalcGraspPointsServerGoal.serialize(obj.goal, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type CalcGraspPointsServerActionGoal
    let len;
    let data = new CalcGraspPointsServerActionGoal(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [goal_id]
    data.goal_id = actionlib_msgs.msg.GoalID.deserialize(buffer, bufferOffset);
    // Deserialize message field [goal]
    data.goal = CalcGraspPointsServerGoal.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += actionlib_msgs.msg.GoalID.getMessageSize(object.goal_id);
    length += CalcGraspPointsServerGoal.getMessageSize(object.goal);
    return length;
  }

  static datatype() {
    // Returns string type for a message object
    return 'haf_grasping/CalcGraspPointsServerActionGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '38bb5a53c06a9410f41de298e209e6e5';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    
    Header header
    actionlib_msgs/GoalID goal_id
    CalcGraspPointsServerGoal goal
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    ================================================================================
    MSG: actionlib_msgs/GoalID
    # The stamp should store the time at which this goal was requested.
    # It is used by an action server when it tries to preempt all
    # goals that were requested before a certain time
    time stamp
    
    # The id provides a way to associate feedback and
    # result message with specific goal requests. The id
    # specified must be unique.
    string id
    
    
    ================================================================================
    MSG: haf_grasping/CalcGraspPointsServerGoal
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # Define the input for grasp calculation: a point cloud
    haf_grasping/GraspInput graspinput
    
    ================================================================================
    MSG: haf_grasping/GraspInput
    
    #Header header                        	# header for time/frame information
    sensor_msgs/PointCloud2 input_pc     	# defines the point cloud on which grasps should be calculated (objects)
    string goal_frame_id				 	# the frame_id to which the point cloud should be transformed before grasps are calculated
    geometry_msgs/Point grasp_area_center 	# center of the region where grasps are searched
    float32 grasp_area_length_x				# defines the length of the rectangle (in x direction (in m)) where grasps are searched (with center grasp_area_center)
    float32 grasp_area_length_y				# defines the length of the rectangle (in y direction (in m)) where grasps are searched (with center grasp_area_center)
    
    
    duration max_calculation_time			# maximal calculation time before grasp result is returned
    bool show_only_best_grasp				# If true, only the best grasp is shown in visualization
    int32 threshold_grasp_evaluation		# defines the threshold for return_first_grasp_over_th if it is set to true (otherwise it is ignored)
    
    geometry_msgs/Vector3 approach_vector	# defines the direction from where a grasp should be executed 
    int32 gripper_opening_width				# defines the factor (actually 1/factor) that is used for pre-grasp opening gripper width 
    
    #geometry_msgs/Vector3 scale_gripper	# Scale of the gripper in x and y direction if it deviates from a gripper of the size of a huMAN hand
    
    
    ================================================================================
    MSG: sensor_msgs/PointCloud2
    # This message holds a collection of N-dimensional points, which may
    # contain additional information such as normals, intensity, etc. The
    # point data is stored as a binary blob, its layout described by the
    # contents of the "fields" array.
    
    # The point cloud data may be organized 2d (image-like) or 1d
    # (unordered). Point clouds organized as 2d images may be produced by
    # camera depth sensors such as stereo or time-of-flight.
    
    # Time of sensor data acquisition, and the coordinate frame ID (for 3d
    # points).
    Header header
    
    # 2D structure of the point cloud. If the cloud is unordered, height is
    # 1 and width is the length of the point cloud.
    uint32 height
    uint32 width
    
    # Describes the channels and their layout in the binary data blob.
    PointField[] fields
    
    bool    is_bigendian # Is this data bigendian?
    uint32  point_step   # Length of a point in bytes
    uint32  row_step     # Length of a row in bytes
    uint8[] data         # Actual point data, size is (row_step*height)
    
    bool is_dense        # True if there are no invalid points
    
    ================================================================================
    MSG: sensor_msgs/PointField
    # This message holds the description of one point entry in the
    # PointCloud2 message format.
    uint8 INT8    = 1
    uint8 UINT8   = 2
    uint8 INT16   = 3
    uint8 UINT16  = 4
    uint8 INT32   = 5
    uint8 UINT32  = 6
    uint8 FLOAT32 = 7
    uint8 FLOAT64 = 8
    
    string name      # Name of field
    uint32 offset    # Offset from start of point struct
    uint8  datatype  # Datatype enumeration, see above
    uint32 count     # How many elements in the field
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    ================================================================================
    MSG: geometry_msgs/Vector3
    # This represents a vector in free space. 
    # It is only meant to represent a direction. Therefore, it does not
    # make sense to apply a translation to it (e.g., when applying a 
    # generic rigid transformation to a Vector3, tf2 will only apply the
    # rotation). If you want your data to be translatable too, use the
    # geometry_msgs/Point message instead.
    
    float64 x
    float64 y
    float64 z
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new CalcGraspPointsServerActionGoal(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.goal_id !== undefined) {
      resolved.goal_id = actionlib_msgs.msg.GoalID.Resolve(msg.goal_id)
    }
    else {
      resolved.goal_id = new actionlib_msgs.msg.GoalID()
    }

    if (msg.goal !== undefined) {
      resolved.goal = CalcGraspPointsServerGoal.Resolve(msg.goal)
    }
    else {
      resolved.goal = new CalcGraspPointsServerGoal()
    }

    return resolved;
    }
};

module.exports = CalcGraspPointsServerActionGoal;
