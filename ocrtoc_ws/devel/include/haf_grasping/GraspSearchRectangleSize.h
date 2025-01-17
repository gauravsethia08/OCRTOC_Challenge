// Generated by gencpp from file haf_grasping/GraspSearchRectangleSize.msg
// DO NOT EDIT!


#ifndef HAF_GRASPING_MESSAGE_GRASPSEARCHRECTANGLESIZE_H
#define HAF_GRASPING_MESSAGE_GRASPSEARCHRECTANGLESIZE_H

#include <ros/service_traits.h>


#include <haf_grasping/GraspSearchRectangleSizeRequest.h>
#include <haf_grasping/GraspSearchRectangleSizeResponse.h>


namespace haf_grasping
{

struct GraspSearchRectangleSize
{

typedef GraspSearchRectangleSizeRequest Request;
typedef GraspSearchRectangleSizeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GraspSearchRectangleSize
} // namespace haf_grasping


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::haf_grasping::GraspSearchRectangleSize > {
  static const char* value()
  {
    return "10248c1006719d0893af769fe3ad61ba";
  }

  static const char* value(const ::haf_grasping::GraspSearchRectangleSize&) { return value(); }
};

template<>
struct DataType< ::haf_grasping::GraspSearchRectangleSize > {
  static const char* value()
  {
    return "haf_grasping/GraspSearchRectangleSize";
  }

  static const char* value(const ::haf_grasping::GraspSearchRectangleSize&) { return value(); }
};


// service_traits::MD5Sum< ::haf_grasping::GraspSearchRectangleSizeRequest> should match
// service_traits::MD5Sum< ::haf_grasping::GraspSearchRectangleSize >
template<>
struct MD5Sum< ::haf_grasping::GraspSearchRectangleSizeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::haf_grasping::GraspSearchRectangleSize >::value();
  }
  static const char* value(const ::haf_grasping::GraspSearchRectangleSizeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::haf_grasping::GraspSearchRectangleSizeRequest> should match
// service_traits::DataType< ::haf_grasping::GraspSearchRectangleSize >
template<>
struct DataType< ::haf_grasping::GraspSearchRectangleSizeRequest>
{
  static const char* value()
  {
    return DataType< ::haf_grasping::GraspSearchRectangleSize >::value();
  }
  static const char* value(const ::haf_grasping::GraspSearchRectangleSizeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::haf_grasping::GraspSearchRectangleSizeResponse> should match
// service_traits::MD5Sum< ::haf_grasping::GraspSearchRectangleSize >
template<>
struct MD5Sum< ::haf_grasping::GraspSearchRectangleSizeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::haf_grasping::GraspSearchRectangleSize >::value();
  }
  static const char* value(const ::haf_grasping::GraspSearchRectangleSizeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::haf_grasping::GraspSearchRectangleSizeResponse> should match
// service_traits::DataType< ::haf_grasping::GraspSearchRectangleSize >
template<>
struct DataType< ::haf_grasping::GraspSearchRectangleSizeResponse>
{
  static const char* value()
  {
    return DataType< ::haf_grasping::GraspSearchRectangleSize >::value();
  }
  static const char* value(const ::haf_grasping::GraspSearchRectangleSizeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // HAF_GRASPING_MESSAGE_GRASPSEARCHRECTANGLESIZE_H
