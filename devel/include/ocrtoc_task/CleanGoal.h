// Generated by gencpp from file ocrtoc_task/CleanGoal.msg
// DO NOT EDIT!


#ifndef OCRTOC_TASK_MESSAGE_CLEANGOAL_H
#define OCRTOC_TASK_MESSAGE_CLEANGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace ocrtoc_task
{
template <class ContainerAllocator>
struct CleanGoal_
{
  typedef CleanGoal_<ContainerAllocator> Type;

  CleanGoal_()
    : scene_id()
    , frame_id()
    , object_list()
    , scale_list()
    , pose_list()  {
    }
  CleanGoal_(const ContainerAllocator& _alloc)
    : scene_id(_alloc)
    , frame_id(_alloc)
    , object_list(_alloc)
    , scale_list(_alloc)
    , pose_list(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _scene_id_type;
  _scene_id_type scene_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _frame_id_type;
  _frame_id_type frame_id;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _object_list_type;
  _object_list_type object_list;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _scale_list_type;
  _scale_list_type scale_list;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Pose_<ContainerAllocator> >::other >  _pose_list_type;
  _pose_list_type pose_list;





  typedef boost::shared_ptr< ::ocrtoc_task::CleanGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ocrtoc_task::CleanGoal_<ContainerAllocator> const> ConstPtr;

}; // struct CleanGoal_

typedef ::ocrtoc_task::CleanGoal_<std::allocator<void> > CleanGoal;

typedef boost::shared_ptr< ::ocrtoc_task::CleanGoal > CleanGoalPtr;
typedef boost::shared_ptr< ::ocrtoc_task::CleanGoal const> CleanGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ocrtoc_task::CleanGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ocrtoc_task::CleanGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ocrtoc_task::CleanGoal_<ContainerAllocator1> & lhs, const ::ocrtoc_task::CleanGoal_<ContainerAllocator2> & rhs)
{
  return lhs.scene_id == rhs.scene_id &&
    lhs.frame_id == rhs.frame_id &&
    lhs.object_list == rhs.object_list &&
    lhs.scale_list == rhs.scale_list &&
    lhs.pose_list == rhs.pose_list;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ocrtoc_task::CleanGoal_<ContainerAllocator1> & lhs, const ::ocrtoc_task::CleanGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ocrtoc_task

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ocrtoc_task::CleanGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ocrtoc_task::CleanGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ocrtoc_task::CleanGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ocrtoc_task::CleanGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ocrtoc_task::CleanGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ocrtoc_task::CleanGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ocrtoc_task::CleanGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e6782454d481f8e42ebf37bc2cfd07ff";
  }

  static const char* value(const ::ocrtoc_task::CleanGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe6782454d481f8e4ULL;
  static const uint64_t static_value2 = 0x2ebf37bc2cfd07ffULL;
};

template<class ContainerAllocator>
struct DataType< ::ocrtoc_task::CleanGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ocrtoc_task/CleanGoal";
  }

  static const char* value(const ::ocrtoc_task::CleanGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ocrtoc_task::CleanGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# task definition\n"
"string scene_id\n"
"string frame_id\n"
"string[] object_list\n"
"float64[] scale_list\n"
"geometry_msgs/Pose[] pose_list\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::ocrtoc_task::CleanGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ocrtoc_task::CleanGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.scene_id);
      stream.next(m.frame_id);
      stream.next(m.object_list);
      stream.next(m.scale_list);
      stream.next(m.pose_list);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CleanGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ocrtoc_task::CleanGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ocrtoc_task::CleanGoal_<ContainerAllocator>& v)
  {
    s << indent << "scene_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.scene_id);
    s << indent << "frame_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.frame_id);
    s << indent << "object_list[]" << std::endl;
    for (size_t i = 0; i < v.object_list.size(); ++i)
    {
      s << indent << "  object_list[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.object_list[i]);
    }
    s << indent << "scale_list[]" << std::endl;
    for (size_t i = 0; i < v.scale_list.size(); ++i)
    {
      s << indent << "  scale_list[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.scale_list[i]);
    }
    s << indent << "pose_list[]" << std::endl;
    for (size_t i = 0; i < v.pose_list.size(); ++i)
    {
      s << indent << "  pose_list[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.pose_list[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // OCRTOC_TASK_MESSAGE_CLEANGOAL_H
