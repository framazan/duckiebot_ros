// Generated by gencpp from file duckietown_msgs/CarControl.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_CARCONTROL_H
#define DUCKIETOWN_MSGS_MESSAGE_CARCONTROL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace duckietown_msgs
{
template <class ContainerAllocator>
struct CarControl_
{
  typedef CarControl_<ContainerAllocator> Type;

  CarControl_()
    : header()
    , speed(0.0)
    , steering(0.0)
    , need_steering(false)  {
    }
  CarControl_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , speed(0.0)
    , steering(0.0)
    , need_steering(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _speed_type;
  _speed_type speed;

   typedef float _steering_type;
  _steering_type steering;

   typedef uint8_t _need_steering_type;
  _need_steering_type need_steering;





  typedef boost::shared_ptr< ::duckietown_msgs::CarControl_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::CarControl_<ContainerAllocator> const> ConstPtr;

}; // struct CarControl_

typedef ::duckietown_msgs::CarControl_<std::allocator<void> > CarControl;

typedef boost::shared_ptr< ::duckietown_msgs::CarControl > CarControlPtr;
typedef boost::shared_ptr< ::duckietown_msgs::CarControl const> CarControlConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::CarControl_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::CarControl_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::duckietown_msgs::CarControl_<ContainerAllocator1> & lhs, const ::duckietown_msgs::CarControl_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.speed == rhs.speed &&
    lhs.steering == rhs.steering &&
    lhs.need_steering == rhs.need_steering;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::duckietown_msgs::CarControl_<ContainerAllocator1> & lhs, const ::duckietown_msgs::CarControl_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::CarControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::CarControl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::CarControl_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::CarControl_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::CarControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::CarControl_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::CarControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a5bdd39ba7df1e21f0742b74ac614c71";
  }

  static const char* value(const ::duckietown_msgs::CarControl_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa5bdd39ba7df1e21ULL;
  static const uint64_t static_value2 = 0xf0742b74ac614c71ULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::CarControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/CarControl";
  }

  static const char* value(const ::duckietown_msgs::CarControl_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::CarControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float32 speed\n"
"float32 steering\n"
"bool need_steering\n"
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
;
  }

  static const char* value(const ::duckietown_msgs::CarControl_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::CarControl_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.speed);
      stream.next(m.steering);
      stream.next(m.need_steering);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CarControl_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::CarControl_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::CarControl_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "speed: ";
    Printer<float>::stream(s, indent + "  ", v.speed);
    s << indent << "steering: ";
    Printer<float>::stream(s, indent + "  ", v.steering);
    s << indent << "need_steering: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.need_steering);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_CARCONTROL_H
