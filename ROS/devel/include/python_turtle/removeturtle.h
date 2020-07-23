// Generated by gencpp from file python_turtle/removeturtle.msg
// DO NOT EDIT!


#ifndef PYTHON_TURTLE_MESSAGE_REMOVETURTLE_H
#define PYTHON_TURTLE_MESSAGE_REMOVETURTLE_H

#include <ros/service_traits.h>


#include <python_turtle/removeturtleRequest.h>
#include <python_turtle/removeturtleResponse.h>


namespace python_turtle
{

struct removeturtle
{

typedef removeturtleRequest Request;
typedef removeturtleResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct removeturtle
} // namespace python_turtle


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::python_turtle::removeturtle > {
  static const char* value()
  {
    return "77308e5f6594808d16ab77e3e54c717b";
  }

  static const char* value(const ::python_turtle::removeturtle&) { return value(); }
};

template<>
struct DataType< ::python_turtle::removeturtle > {
  static const char* value()
  {
    return "python_turtle/removeturtle";
  }

  static const char* value(const ::python_turtle::removeturtle&) { return value(); }
};


// service_traits::MD5Sum< ::python_turtle::removeturtleRequest> should match 
// service_traits::MD5Sum< ::python_turtle::removeturtle > 
template<>
struct MD5Sum< ::python_turtle::removeturtleRequest>
{
  static const char* value()
  {
    return MD5Sum< ::python_turtle::removeturtle >::value();
  }
  static const char* value(const ::python_turtle::removeturtleRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::python_turtle::removeturtleRequest> should match 
// service_traits::DataType< ::python_turtle::removeturtle > 
template<>
struct DataType< ::python_turtle::removeturtleRequest>
{
  static const char* value()
  {
    return DataType< ::python_turtle::removeturtle >::value();
  }
  static const char* value(const ::python_turtle::removeturtleRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::python_turtle::removeturtleResponse> should match 
// service_traits::MD5Sum< ::python_turtle::removeturtle > 
template<>
struct MD5Sum< ::python_turtle::removeturtleResponse>
{
  static const char* value()
  {
    return MD5Sum< ::python_turtle::removeturtle >::value();
  }
  static const char* value(const ::python_turtle::removeturtleResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::python_turtle::removeturtleResponse> should match 
// service_traits::DataType< ::python_turtle::removeturtle > 
template<>
struct DataType< ::python_turtle::removeturtleResponse>
{
  static const char* value()
  {
    return DataType< ::python_turtle::removeturtle >::value();
  }
  static const char* value(const ::python_turtle::removeturtleResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PYTHON_TURTLE_MESSAGE_REMOVETURTLE_H