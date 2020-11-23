// Generated by gencpp from file haf_grasping/GraspPreGripperOpeningWidthResponse.msg
// DO NOT EDIT!


#ifndef HAF_GRASPING_MESSAGE_GRASPPREGRIPPEROPENINGWIDTHRESPONSE_H
#define HAF_GRASPING_MESSAGE_GRASPPREGRIPPEROPENINGWIDTHRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace haf_grasping
{
template <class ContainerAllocator>
struct GraspPreGripperOpeningWidthResponse_
{
  typedef GraspPreGripperOpeningWidthResponse_<ContainerAllocator> Type;

  GraspPreGripperOpeningWidthResponse_()
    : result(false)  {
    }
  GraspPreGripperOpeningWidthResponse_(const ContainerAllocator& _alloc)
    : result(false)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::haf_grasping::GraspPreGripperOpeningWidthResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::haf_grasping::GraspPreGripperOpeningWidthResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GraspPreGripperOpeningWidthResponse_

typedef ::haf_grasping::GraspPreGripperOpeningWidthResponse_<std::allocator<void> > GraspPreGripperOpeningWidthResponse;

typedef boost::shared_ptr< ::haf_grasping::GraspPreGripperOpeningWidthResponse > GraspPreGripperOpeningWidthResponsePtr;
typedef boost::shared_ptr< ::haf_grasping::GraspPreGripperOpeningWidthResponse const> GraspPreGripperOpeningWidthResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::haf_grasping::GraspPreGripperOpeningWidthResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::haf_grasping::GraspPreGripperOpeningWidthResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::haf_grasping::GraspPreGripperOpeningWidthResponse_<ContainerAllocator1> & lhs, const ::haf_grasping::GraspPreGripperOpeningWidthResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::haf_grasping::GraspPreGripperOpeningWidthResponse_<ContainerAllocator1> & lhs, const ::haf_grasping::GraspPreGripperOpeningWidthResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace haf_grasping

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::haf_grasping::GraspPreGripperOpeningWidthResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::haf_grasping::GraspPreGripperOpeningWidthResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::haf_grasping::GraspPreGripperOpeningWidthResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::haf_grasping::GraspPreGripperOpeningWidthResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::haf_grasping::GraspPreGripperOpeningWidthResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::haf_grasping::GraspPreGripperOpeningWidthResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::haf_grasping::GraspPreGripperOpeningWidthResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eb13ac1f1354ccecb7941ee8fa2192e8";
  }

  static const char* value(const ::haf_grasping::GraspPreGripperOpeningWidthResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeb13ac1f1354ccecULL;
  static const uint64_t static_value2 = 0xb7941ee8fa2192e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::haf_grasping::GraspPreGripperOpeningWidthResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "haf_grasping/GraspPreGripperOpeningWidthResponse";
  }

  static const char* value(const ::haf_grasping::GraspPreGripperOpeningWidthResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::haf_grasping::GraspPreGripperOpeningWidthResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool result\n"
"\n"
;
  }

  static const char* value(const ::haf_grasping::GraspPreGripperOpeningWidthResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::haf_grasping::GraspPreGripperOpeningWidthResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GraspPreGripperOpeningWidthResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::haf_grasping::GraspPreGripperOpeningWidthResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::haf_grasping::GraspPreGripperOpeningWidthResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HAF_GRASPING_MESSAGE_GRASPPREGRIPPEROPENINGWIDTHRESPONSE_H
