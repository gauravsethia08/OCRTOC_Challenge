// Auto-generated. Do not edit!

// (in-package ocrtoc_task.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class CleanGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.scene_id = null;
      this.frame_id = null;
      this.object_list = null;
      this.scale_list = null;
      this.pose_list = null;
    }
    else {
      if (initObj.hasOwnProperty('scene_id')) {
        this.scene_id = initObj.scene_id
      }
      else {
        this.scene_id = '';
      }
      if (initObj.hasOwnProperty('frame_id')) {
        this.frame_id = initObj.frame_id
      }
      else {
        this.frame_id = '';
      }
      if (initObj.hasOwnProperty('object_list')) {
        this.object_list = initObj.object_list
      }
      else {
        this.object_list = [];
      }
      if (initObj.hasOwnProperty('scale_list')) {
        this.scale_list = initObj.scale_list
      }
      else {
        this.scale_list = [];
      }
      if (initObj.hasOwnProperty('pose_list')) {
        this.pose_list = initObj.pose_list
      }
      else {
        this.pose_list = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type CleanGoal
    // Serialize message field [scene_id]
    bufferOffset = _serializer.string(obj.scene_id, buffer, bufferOffset);
    // Serialize message field [frame_id]
    bufferOffset = _serializer.string(obj.frame_id, buffer, bufferOffset);
    // Serialize message field [object_list]
    bufferOffset = _arraySerializer.string(obj.object_list, buffer, bufferOffset, null);
    // Serialize message field [scale_list]
    bufferOffset = _arraySerializer.float64(obj.scale_list, buffer, bufferOffset, null);
    // Serialize message field [pose_list]
    // Serialize the length for message field [pose_list]
    bufferOffset = _serializer.uint32(obj.pose_list.length, buffer, bufferOffset);
    obj.pose_list.forEach((val) => {
      bufferOffset = geometry_msgs.msg.Pose.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type CleanGoal
    let len;
    let data = new CleanGoal(null);
    // Deserialize message field [scene_id]
    data.scene_id = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [frame_id]
    data.frame_id = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [object_list]
    data.object_list = _arrayDeserializer.string(buffer, bufferOffset, null)
    // Deserialize message field [scale_list]
    data.scale_list = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [pose_list]
    // Deserialize array length for message field [pose_list]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.pose_list = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.pose_list[i] = geometry_msgs.msg.Pose.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.scene_id.length;
    length += object.frame_id.length;
    object.object_list.forEach((val) => {
      length += 4 + val.length;
    });
    length += 8 * object.scale_list.length;
    length += 56 * object.pose_list.length;
    return length + 20;
  }

  static datatype() {
    // Returns string type for a message object
    return 'ocrtoc_task/CleanGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'e6782454d481f8e42ebf37bc2cfd07ff';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # task definition
    string scene_id
    string frame_id
    string[] object_list
    float64[] scale_list
    geometry_msgs/Pose[] pose_list
    
    ================================================================================
    MSG: geometry_msgs/Pose
    # A representation of pose in free space, composed of position and orientation. 
    Point position
    Quaternion orientation
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    ================================================================================
    MSG: geometry_msgs/Quaternion
    # This represents an orientation in free space in quaternion form.
    
    float64 x
    float64 y
    float64 z
    float64 w
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new CleanGoal(null);
    if (msg.scene_id !== undefined) {
      resolved.scene_id = msg.scene_id;
    }
    else {
      resolved.scene_id = ''
    }

    if (msg.frame_id !== undefined) {
      resolved.frame_id = msg.frame_id;
    }
    else {
      resolved.frame_id = ''
    }

    if (msg.object_list !== undefined) {
      resolved.object_list = msg.object_list;
    }
    else {
      resolved.object_list = []
    }

    if (msg.scale_list !== undefined) {
      resolved.scale_list = msg.scale_list;
    }
    else {
      resolved.scale_list = []
    }

    if (msg.pose_list !== undefined) {
      resolved.pose_list = new Array(msg.pose_list.length);
      for (let i = 0; i < resolved.pose_list.length; ++i) {
        resolved.pose_list[i] = geometry_msgs.msg.Pose.Resolve(msg.pose_list[i]);
      }
    }
    else {
      resolved.pose_list = []
    }

    return resolved;
    }
};

module.exports = CleanGoal;
