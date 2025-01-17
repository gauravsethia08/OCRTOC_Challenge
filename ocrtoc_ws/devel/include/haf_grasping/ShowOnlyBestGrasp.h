// Generated by gencpp from file haf_grasping/ShowOnlyBestGrasp.msg
// DO NOT EDIT!


#ifndef HAF_GRASPING_MESSAGE_SHOWONLYBESTGRASP_H
#define HAF_GRASPING_MESSAGE_SHOWONLYBESTGRASP_H

#include <ros/service_traits.h>


#include <haf_grasping/ShowOnlyBestGraspRequest.h>
#include <haf_grasping/ShowOnlyBestGraspResponse.h>


namespace haf_grasping
{

struct ShowOnlyBestGrasp
{

typedef ShowOnlyBestGraspRequest Request;
typedef ShowOnlyBestGraspResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ShowOnlyBestGrasp
} // namespace haf_grasping


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::haf_grasping::ShowOnlyBestGrasp > {
  static const char* value()
  {
    return "c13d71448b4276a64c7f5417c0cd390a";
  }

  static const char* value(const ::haf_grasping::ShowOnlyBestGrasp&) { return value(); }
};

template<>
struct DataType< ::haf_grasping::ShowOnlyBestGrasp > {
  static const char* value()
  {
    return "haf_grasping/ShowOnlyBestGrasp";
  }

  static const char* value(const ::haf_grasping::ShowOnlyBestGrasp&) { return value(); }
};


// service_traits::MD5Sum< ::haf_grasping::ShowOnlyBestGraspRequest> should match
// service_traits::MD5Sum< ::haf_grasping::ShowOnlyBestGrasp >
template<>
struct MD5Sum< ::haf_grasping::ShowOnlyBestGraspRequest>
{
  static const char* value()
  {
    return MD5Sum< ::haf_grasping::ShowOnlyBestGrasp >::value();
  }
  static const char* value(const ::haf_grasping::ShowOnlyBestGraspRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::haf_grasping::ShowOnlyBestGraspRequest> should match
// service_traits::DataType< ::haf_grasping::ShowOnlyBestGrasp >
template<>
struct DataType< ::haf_grasping::ShowOnlyBestGraspRequest>
{
  static const char* value()
  {
    return DataType< ::haf_grasping::ShowOnlyBestGrasp >::value();
  }
  static const char* value(const ::haf_grasping::ShowOnlyBestGraspRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::haf_grasping::ShowOnlyBestGraspResponse> should match
// service_traits::MD5Sum< ::haf_grasping::ShowOnlyBestGrasp >
template<>
struct MD5Sum< ::haf_grasping::ShowOnlyBestGraspResponse>
{
  static const char* value()
  {
    return MD5Sum< ::haf_grasping::ShowOnlyBestGrasp >::value();
  }
  static const char* value(const ::haf_grasping::ShowOnlyBestGraspResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::haf_grasping::ShowOnlyBestGraspResponse> should match
// service_traits::DataType< ::haf_grasping::ShowOnlyBestGrasp >
template<>
struct DataType< ::haf_grasping::ShowOnlyBestGraspResponse>
{
  static const char* value()
  {
    return DataType< ::haf_grasping::ShowOnlyBestGrasp >::value();
  }
  static const char* value(const ::haf_grasping::ShowOnlyBestGraspResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // HAF_GRASPING_MESSAGE_SHOWONLYBESTGRASP_H
