// Generated by gencpp from file hdl_graph_slam/SaveMap.msg
// DO NOT EDIT!


#ifndef HDL_GRAPH_SLAM_MESSAGE_SAVEMAP_H
#define HDL_GRAPH_SLAM_MESSAGE_SAVEMAP_H

#include <ros/service_traits.h>


#include <hdl_graph_slam/SaveMapRequest.h>
#include <hdl_graph_slam/SaveMapResponse.h>


namespace hdl_graph_slam
{

struct SaveMap
{

typedef SaveMapRequest Request;
typedef SaveMapResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SaveMap
} // namespace hdl_graph_slam


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::hdl_graph_slam::SaveMap > {
  static const char* value()
  {
    return "9b82c64d089149d300598523af304f22";
  }

  static const char* value(const ::hdl_graph_slam::SaveMap&) { return value(); }
};

template<>
struct DataType< ::hdl_graph_slam::SaveMap > {
  static const char* value()
  {
    return "hdl_graph_slam/SaveMap";
  }

  static const char* value(const ::hdl_graph_slam::SaveMap&) { return value(); }
};


// service_traits::MD5Sum< ::hdl_graph_slam::SaveMapRequest> should match 
// service_traits::MD5Sum< ::hdl_graph_slam::SaveMap > 
template<>
struct MD5Sum< ::hdl_graph_slam::SaveMapRequest>
{
  static const char* value()
  {
    return MD5Sum< ::hdl_graph_slam::SaveMap >::value();
  }
  static const char* value(const ::hdl_graph_slam::SaveMapRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::hdl_graph_slam::SaveMapRequest> should match 
// service_traits::DataType< ::hdl_graph_slam::SaveMap > 
template<>
struct DataType< ::hdl_graph_slam::SaveMapRequest>
{
  static const char* value()
  {
    return DataType< ::hdl_graph_slam::SaveMap >::value();
  }
  static const char* value(const ::hdl_graph_slam::SaveMapRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::hdl_graph_slam::SaveMapResponse> should match 
// service_traits::MD5Sum< ::hdl_graph_slam::SaveMap > 
template<>
struct MD5Sum< ::hdl_graph_slam::SaveMapResponse>
{
  static const char* value()
  {
    return MD5Sum< ::hdl_graph_slam::SaveMap >::value();
  }
  static const char* value(const ::hdl_graph_slam::SaveMapResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::hdl_graph_slam::SaveMapResponse> should match 
// service_traits::DataType< ::hdl_graph_slam::SaveMap > 
template<>
struct DataType< ::hdl_graph_slam::SaveMapResponse>
{
  static const char* value()
  {
    return DataType< ::hdl_graph_slam::SaveMap >::value();
  }
  static const char* value(const ::hdl_graph_slam::SaveMapResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // HDL_GRAPH_SLAM_MESSAGE_SAVEMAP_H
