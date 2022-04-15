// Generated by gencpp from file duckietown_msgs/NodeRequestParamsUpdateResponse.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_NODEREQUESTPARAMSUPDATERESPONSE_H
#define DUCKIETOWN_MSGS_MESSAGE_NODEREQUESTPARAMSUPDATERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace duckietown_msgs
{
template <class ContainerAllocator>
struct NodeRequestParamsUpdateResponse_
{
  typedef NodeRequestParamsUpdateResponse_<ContainerAllocator> Type;

  NodeRequestParamsUpdateResponse_()
    : success(false)  {
    }
  NodeRequestParamsUpdateResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::duckietown_msgs::NodeRequestParamsUpdateResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::NodeRequestParamsUpdateResponse_<ContainerAllocator> const> ConstPtr;

}; // struct NodeRequestParamsUpdateResponse_

typedef ::duckietown_msgs::NodeRequestParamsUpdateResponse_<std::allocator<void> > NodeRequestParamsUpdateResponse;

typedef boost::shared_ptr< ::duckietown_msgs::NodeRequestParamsUpdateResponse > NodeRequestParamsUpdateResponsePtr;
typedef boost::shared_ptr< ::duckietown_msgs::NodeRequestParamsUpdateResponse const> NodeRequestParamsUpdateResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::NodeRequestParamsUpdateResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::NodeRequestParamsUpdateResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::duckietown_msgs::NodeRequestParamsUpdateResponse_<ContainerAllocator1> & lhs, const ::duckietown_msgs::NodeRequestParamsUpdateResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::duckietown_msgs::NodeRequestParamsUpdateResponse_<ContainerAllocator1> & lhs, const ::duckietown_msgs::NodeRequestParamsUpdateResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::NodeRequestParamsUpdateResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::NodeRequestParamsUpdateResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::NodeRequestParamsUpdateResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::NodeRequestParamsUpdateResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::NodeRequestParamsUpdateResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::NodeRequestParamsUpdateResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::NodeRequestParamsUpdateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::duckietown_msgs::NodeRequestParamsUpdateResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::NodeRequestParamsUpdateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/NodeRequestParamsUpdateResponse";
  }

  static const char* value(const ::duckietown_msgs::NodeRequestParamsUpdateResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::NodeRequestParamsUpdateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"\n"
;
  }

  static const char* value(const ::duckietown_msgs::NodeRequestParamsUpdateResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::NodeRequestParamsUpdateResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NodeRequestParamsUpdateResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::NodeRequestParamsUpdateResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::NodeRequestParamsUpdateResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_NODEREQUESTPARAMSUPDATERESPONSE_H
