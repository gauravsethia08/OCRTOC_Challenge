// Generated by gencpp from file haf_grasping/GraspCalculationTimeMax.msg
// DO NOT EDIT!


#ifndef HAF_GRASPING_MESSAGE_GRASPCALCULATIONTIMEMAX_H
#define HAF_GRASPING_MESSAGE_GRASPCALCULATIONTIMEMAX_H

#include <ros/service_traits.h>


#include <haf_grasping/GraspCalculationTimeMaxRequest.h>
#include <haf_grasping/GraspCalculationTimeMaxResponse.h>


namespace haf_grasping
{

struct GraspCalculationTimeMax
{

typedef GraspCalculationTimeMaxRequest Request;
typedef GraspCalculationTimeMaxResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GraspCalculationTimeMax
} // namespace haf_grasping


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::haf_grasping::GraspCalculationTimeMax > {
  static const char* value()
  {
    return "fe39c4e255168ec5afaa585fcfbd448f";
  }

  static const char* value(const ::haf_grasping::GraspCalculationTimeMax&) { return value(); }
};

template<>
struct DataType< ::haf_grasping::GraspCalculationTimeMax > {
  static const char* value()
  {
    return "haf_grasping/GraspCalculationTimeMax";
  }

  static const char* value(const ::haf_grasping::GraspCalculationTimeMax&) { return value(); }
};


// service_traits::MD5Sum< ::haf_grasping::GraspCalculationTimeMaxRequest> should match
// service_traits::MD5Sum< ::haf_grasping::GraspCalculationTimeMax >
template<>
struct MD5Sum< ::haf_grasping::GraspCalculationTimeMaxRequest>
{
  static const char* value()
  {
    return MD5Sum< ::haf_grasping::GraspCalculationTimeMax >::value();
  }
  static const char* value(const ::haf_grasping::GraspCalculationTimeMaxRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::haf_grasping::GraspCalculationTimeMaxRequest> should match
// service_traits::DataType< ::haf_grasping::GraspCalculationTimeMax >
template<>
struct DataType< ::haf_grasping::GraspCalculationTimeMaxRequest>
{
  static const char* value()
  {
    return DataType< ::haf_grasping::GraspCalculationTimeMax >::value();
  }
  static const char* value(const ::haf_grasping::GraspCalculationTimeMaxRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::haf_grasping::GraspCalculationTimeMaxResponse> should match
// service_traits::MD5Sum< ::haf_grasping::GraspCalculationTimeMax >
template<>
struct MD5Sum< ::haf_grasping::GraspCalculationTimeMaxResponse>
{
  static const char* value()
  {
    return MD5Sum< ::haf_grasping::GraspCalculationTimeMax >::value();
  }
  static const char* value(const ::haf_grasping::GraspCalculationTimeMaxResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::haf_grasping::GraspCalculationTimeMaxResponse> should match
// service_traits::DataType< ::haf_grasping::GraspCalculationTimeMax >
template<>
struct DataType< ::haf_grasping::GraspCalculationTimeMaxResponse>
{
  static const char* value()
  {
    return DataType< ::haf_grasping::GraspCalculationTimeMax >::value();
  }
  static const char* value(const ::haf_grasping::GraspCalculationTimeMaxResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // HAF_GRASPING_MESSAGE_GRASPCALCULATIONTIMEMAX_H
