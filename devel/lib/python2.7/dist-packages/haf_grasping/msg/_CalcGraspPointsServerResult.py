# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from haf_grasping/CalcGraspPointsServerResult.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import haf_grasping.msg
import std_msgs.msg

class CalcGraspPointsServerResult(genpy.Message):
  _md5sum = "4d60c1e64258adfc60c950e0e4e2bab1"
  _type = "haf_grasping/CalcGraspPointsServerResult"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Define the result, if succeeded: defines grasp for gripper
haf_grasping/GraspOutput graspOutput

================================================================================
MSG: haf_grasping/GraspOutput
Header header
int32 eval
geometry_msgs/Point graspPoint1
geometry_msgs/Point graspPoint2
geometry_msgs/Point averagedGraspPoint
geometry_msgs/Vector3 approachVector
float32 roll # radians

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
float64 z"""
  __slots__ = ['graspOutput']
  _slot_types = ['haf_grasping/GraspOutput']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       graspOutput

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CalcGraspPointsServerResult, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.graspOutput is None:
        self.graspOutput = haf_grasping.msg.GraspOutput()
    else:
      self.graspOutput = haf_grasping.msg.GraspOutput()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.graspOutput.header.seq, _x.graspOutput.header.stamp.secs, _x.graspOutput.header.stamp.nsecs))
      _x = self.graspOutput.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_i12df().pack(_x.graspOutput.eval, _x.graspOutput.graspPoint1.x, _x.graspOutput.graspPoint1.y, _x.graspOutput.graspPoint1.z, _x.graspOutput.graspPoint2.x, _x.graspOutput.graspPoint2.y, _x.graspOutput.graspPoint2.z, _x.graspOutput.averagedGraspPoint.x, _x.graspOutput.averagedGraspPoint.y, _x.graspOutput.averagedGraspPoint.z, _x.graspOutput.approachVector.x, _x.graspOutput.approachVector.y, _x.graspOutput.approachVector.z, _x.graspOutput.roll))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.graspOutput is None:
        self.graspOutput = haf_grasping.msg.GraspOutput()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.graspOutput.header.seq, _x.graspOutput.header.stamp.secs, _x.graspOutput.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.graspOutput.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.graspOutput.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 104
      (_x.graspOutput.eval, _x.graspOutput.graspPoint1.x, _x.graspOutput.graspPoint1.y, _x.graspOutput.graspPoint1.z, _x.graspOutput.graspPoint2.x, _x.graspOutput.graspPoint2.y, _x.graspOutput.graspPoint2.z, _x.graspOutput.averagedGraspPoint.x, _x.graspOutput.averagedGraspPoint.y, _x.graspOutput.averagedGraspPoint.z, _x.graspOutput.approachVector.x, _x.graspOutput.approachVector.y, _x.graspOutput.approachVector.z, _x.graspOutput.roll,) = _get_struct_i12df().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.graspOutput.header.seq, _x.graspOutput.header.stamp.secs, _x.graspOutput.header.stamp.nsecs))
      _x = self.graspOutput.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_i12df().pack(_x.graspOutput.eval, _x.graspOutput.graspPoint1.x, _x.graspOutput.graspPoint1.y, _x.graspOutput.graspPoint1.z, _x.graspOutput.graspPoint2.x, _x.graspOutput.graspPoint2.y, _x.graspOutput.graspPoint2.z, _x.graspOutput.averagedGraspPoint.x, _x.graspOutput.averagedGraspPoint.y, _x.graspOutput.averagedGraspPoint.z, _x.graspOutput.approachVector.x, _x.graspOutput.approachVector.y, _x.graspOutput.approachVector.z, _x.graspOutput.roll))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.graspOutput is None:
        self.graspOutput = haf_grasping.msg.GraspOutput()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.graspOutput.header.seq, _x.graspOutput.header.stamp.secs, _x.graspOutput.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.graspOutput.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.graspOutput.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 104
      (_x.graspOutput.eval, _x.graspOutput.graspPoint1.x, _x.graspOutput.graspPoint1.y, _x.graspOutput.graspPoint1.z, _x.graspOutput.graspPoint2.x, _x.graspOutput.graspPoint2.y, _x.graspOutput.graspPoint2.z, _x.graspOutput.averagedGraspPoint.x, _x.graspOutput.averagedGraspPoint.y, _x.graspOutput.averagedGraspPoint.z, _x.graspOutput.approachVector.x, _x.graspOutput.approachVector.y, _x.graspOutput.approachVector.z, _x.graspOutput.roll,) = _get_struct_i12df().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_i12df = None
def _get_struct_i12df():
    global _struct_i12df
    if _struct_i12df is None:
        _struct_i12df = struct.Struct("<i12df")
    return _struct_i12df
