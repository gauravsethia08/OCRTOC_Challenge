// Generated by gencpp from file haf_grasping/GraspSearchCenterResponse.msg
// DO NOT EDIT!


#ifndef HAF_GRASPING_MESSAGE_GRASPSEARCHCENTERRESPONSE_H
#define HAF_GRASPING_MESSAGE_GRASPSEARCHCENTERRESPONSE_H


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
struct GraspSearchCenterResponse_
{
  typedef GraspSearchCenterResponse_<ContainerAllocator> Type;

  GraspSearchCenterResponse_()
    : result(false)  {
    }
  GraspSearchCenterResponse_(const ContainerAllocator& _alloc)
    : result(false)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::haf_grasping::GraspSearchCenterResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::haf_grasping::GraspSearchCenterResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GraspSearchCenterResponse_

typedef ::haf_grasping::GraspSearchCenterResponse_<std::allocator<void> > GraspSearchCenterResponse;

typedef boost::shared_ptr< ::haf_grasping::GraspSearchCenterResponse > GraspSearchCenterResponsePtr;
typedef boost::shared_ptr< ::haf_grasping::GraspSearchCenterResponse const> GraspSearchCenterResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::haf_grasping::GraspSearchCenterResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::haf_grasping::GraspSearchCenterResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::haf_grasping::GraspSearchCenterResponse_<ContainerAllocator1> & lhs, const ::haf_grasping::GraspSearchCenterResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::haf_grasping::GraspSearchCenterResponse_<ContainerAllocator1> & lhs, const ::haf_grasping::GraspSearchCenterResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace haf_grasping

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::haf_grasping::GraspSearchCenterResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::haf_grasping::GraspSearchCenterResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::haf_grasping::GraspSearchCenterResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::haf_grasping::GraspSearchCenterResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::haf_grasping::GraspSearchCenterResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::haf_grasping::GraspSearchCenterResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::haf_grasping::GraspSearchCenterResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eb13ac1f1354ccecb7941ee8fa2192e8";
  }

  static const char* value(const ::haf_grasping::GraspSearchCenterResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeb13ac1f1354ccecULL;
  static const uint64_t static_value2 = 0xb7941ee8fa2192e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::haf_grasping::GraspSearchCenterResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "haf_grasping/GraspSearchCenterResponse";
  }

  static const char* value(const ::haf_grasping::GraspSearchCenterResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::haf_grasping::GraspSearchCenterResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool result\n"
"\n"
;
  }

  static const char* value(const ::haf_grasping::GraspSearchCenterResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::haf_grasping::GraspSearchCenterResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GraspSearchCenterResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::haf_grasping::GraspSearchCenterResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::haf_grasping::GraspSearchCenterResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HAF_GRASPING_MESSAGE_GRASPSEARCHCENTERRESPONSE_H
