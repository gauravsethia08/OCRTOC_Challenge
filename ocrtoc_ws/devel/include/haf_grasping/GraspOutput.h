// Generated by gencpp from file haf_grasping/GraspOutput.msg
// DO NOT EDIT!


#ifndef HAF_GRASPING_MESSAGE_GRASPOUTPUT_H
#define HAF_GRASPING_MESSAGE_GRASPOUTPUT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Vector3.h>

namespace haf_grasping
{
template <class ContainerAllocator>
struct GraspOutput_
{
  typedef GraspOutput_<ContainerAllocator> Type;

  GraspOutput_()
    : header()
    , eval(0)
    , graspPoint1()
    , graspPoint2()
    , averagedGraspPoint()
    , approachVector()
    , roll(0.0)  {
    }
  GraspOutput_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , eval(0)
    , graspPoint1(_alloc)
    , graspPoint2(_alloc)
    , averagedGraspPoint(_alloc)
    , approachVector(_alloc)
    , roll(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _eval_type;
  _eval_type eval;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _graspPoint1_type;
  _graspPoint1_type graspPoint1;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _graspPoint2_type;
  _graspPoint2_type graspPoint2;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _averagedGraspPoint_type;
  _averagedGraspPoint_type averagedGraspPoint;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _approachVector_type;
  _approachVector_type approachVector;

   typedef float _roll_type;
  _roll_type roll;





  typedef boost::shared_ptr< ::haf_grasping::GraspOutput_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::haf_grasping::GraspOutput_<ContainerAllocator> const> ConstPtr;

}; // struct GraspOutput_

typedef ::haf_grasping::GraspOutput_<std::allocator<void> > GraspOutput;

typedef boost::shared_ptr< ::haf_grasping::GraspOutput > GraspOutputPtr;
typedef boost::shared_ptr< ::haf_grasping::GraspOutput const> GraspOutputConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::haf_grasping::GraspOutput_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::haf_grasping::GraspOutput_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::haf_grasping::GraspOutput_<ContainerAllocator1> & lhs, const ::haf_grasping::GraspOutput_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.eval == rhs.eval &&
    lhs.graspPoint1 == rhs.graspPoint1 &&
    lhs.graspPoint2 == rhs.graspPoint2 &&
    lhs.averagedGraspPoint == rhs.averagedGraspPoint &&
    lhs.approachVector == rhs.approachVector &&
    lhs.roll == rhs.roll;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::haf_grasping::GraspOutput_<ContainerAllocator1> & lhs, const ::haf_grasping::GraspOutput_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace haf_grasping

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::haf_grasping::GraspOutput_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::haf_grasping::GraspOutput_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::haf_grasping::GraspOutput_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::haf_grasping::GraspOutput_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::haf_grasping::GraspOutput_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::haf_grasping::GraspOutput_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::haf_grasping::GraspOutput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5d81f8c795c680629cc920340e4f0008";
  }

  static const char* value(const ::haf_grasping::GraspOutput_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5d81f8c795c68062ULL;
  static const uint64_t static_value2 = 0x9cc920340e4f0008ULL;
};

template<class ContainerAllocator>
struct DataType< ::haf_grasping::GraspOutput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "haf_grasping/GraspOutput";
  }

  static const char* value(const ::haf_grasping::GraspOutput_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::haf_grasping::GraspOutput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"int32 eval\n"
"geometry_msgs/Point graspPoint1\n"
"geometry_msgs/Point graspPoint2\n"
"geometry_msgs/Point averagedGraspPoint\n"
"geometry_msgs/Vector3 approachVector\n"
"float32 roll # radians\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::haf_grasping::GraspOutput_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::haf_grasping::GraspOutput_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.eval);
      stream.next(m.graspPoint1);
      stream.next(m.graspPoint2);
      stream.next(m.averagedGraspPoint);
      stream.next(m.approachVector);
      stream.next(m.roll);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GraspOutput_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::haf_grasping::GraspOutput_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::haf_grasping::GraspOutput_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "eval: ";
    Printer<int32_t>::stream(s, indent + "  ", v.eval);
    s << indent << "graspPoint1: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.graspPoint1);
    s << indent << "graspPoint2: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.graspPoint2);
    s << indent << "averagedGraspPoint: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.averagedGraspPoint);
    s << indent << "approachVector: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.approachVector);
    s << indent << "roll: ";
    Printer<float>::stream(s, indent + "  ", v.roll);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HAF_GRASPING_MESSAGE_GRASPOUTPUT_H
