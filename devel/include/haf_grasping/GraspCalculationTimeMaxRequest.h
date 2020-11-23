// Generated by gencpp from file haf_grasping/GraspCalculationTimeMaxRequest.msg
// DO NOT EDIT!


#ifndef HAF_GRASPING_MESSAGE_GRASPCALCULATIONTIMEMAXREQUEST_H
#define HAF_GRASPING_MESSAGE_GRASPCALCULATIONTIMEMAXREQUEST_H


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
struct GraspCalculationTimeMaxRequest_
{
  typedef GraspCalculationTimeMaxRequest_<ContainerAllocator> Type;

  GraspCalculationTimeMaxRequest_()
    : max_calculation_time()  {
    }
  GraspCalculationTimeMaxRequest_(const ContainerAllocator& _alloc)
    : max_calculation_time()  {
  (void)_alloc;
    }



   typedef ros::Duration _max_calculation_time_type;
  _max_calculation_time_type max_calculation_time;





  typedef boost::shared_ptr< ::haf_grasping::GraspCalculationTimeMaxRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::haf_grasping::GraspCalculationTimeMaxRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GraspCalculationTimeMaxRequest_

typedef ::haf_grasping::GraspCalculationTimeMaxRequest_<std::allocator<void> > GraspCalculationTimeMaxRequest;

typedef boost::shared_ptr< ::haf_grasping::GraspCalculationTimeMaxRequest > GraspCalculationTimeMaxRequestPtr;
typedef boost::shared_ptr< ::haf_grasping::GraspCalculationTimeMaxRequest const> GraspCalculationTimeMaxRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::haf_grasping::GraspCalculationTimeMaxRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::haf_grasping::GraspCalculationTimeMaxRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::haf_grasping::GraspCalculationTimeMaxRequest_<ContainerAllocator1> & lhs, const ::haf_grasping::GraspCalculationTimeMaxRequest_<ContainerAllocator2> & rhs)
{
  return lhs.max_calculation_time == rhs.max_calculation_time;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::haf_grasping::GraspCalculationTimeMaxRequest_<ContainerAllocator1> & lhs, const ::haf_grasping::GraspCalculationTimeMaxRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace haf_grasping

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::haf_grasping::GraspCalculationTimeMaxRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::haf_grasping::GraspCalculationTimeMaxRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::haf_grasping::GraspCalculationTimeMaxRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::haf_grasping::GraspCalculationTimeMaxRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::haf_grasping::GraspCalculationTimeMaxRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::haf_grasping::GraspCalculationTimeMaxRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::haf_grasping::GraspCalculationTimeMaxRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "08b29bcfc2f5ed2f5016420098e04b4c";
  }

  static const char* value(const ::haf_grasping::GraspCalculationTimeMaxRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x08b29bcfc2f5ed2fULL;
  static const uint64_t static_value2 = 0x5016420098e04b4cULL;
};

template<class ContainerAllocator>
struct DataType< ::haf_grasping::GraspCalculationTimeMaxRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "haf_grasping/GraspCalculationTimeMaxRequest";
  }

  static const char* value(const ::haf_grasping::GraspCalculationTimeMaxRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::haf_grasping::GraspCalculationTimeMaxRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duration max_calculation_time			# maximal calculation time before grasp result is returned\n"
;
  }

  static const char* value(const ::haf_grasping::GraspCalculationTimeMaxRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::haf_grasping::GraspCalculationTimeMaxRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.max_calculation_time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GraspCalculationTimeMaxRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::haf_grasping::GraspCalculationTimeMaxRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::haf_grasping::GraspCalculationTimeMaxRequest_<ContainerAllocator>& v)
  {
    s << indent << "max_calculation_time: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.max_calculation_time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HAF_GRASPING_MESSAGE_GRASPCALCULATIONTIMEMAXREQUEST_H
