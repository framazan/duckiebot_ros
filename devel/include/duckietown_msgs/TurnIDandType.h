// Generated by gencpp from file duckietown_msgs/TurnIDandType.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_TURNIDANDTYPE_H
#define DUCKIETOWN_MSGS_MESSAGE_TURNIDANDTYPE_H


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
struct TurnIDandType_
{
  typedef TurnIDandType_<ContainerAllocator> Type;

  TurnIDandType_()
    : tag_id(0)
    , turn_type(0)  {
    }
  TurnIDandType_(const ContainerAllocator& _alloc)
    : tag_id(0)
    , turn_type(0)  {
  (void)_alloc;
    }



   typedef int16_t _tag_id_type;
  _tag_id_type tag_id;

   typedef int16_t _turn_type_type;
  _turn_type_type turn_type;





  typedef boost::shared_ptr< ::duckietown_msgs::TurnIDandType_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::TurnIDandType_<ContainerAllocator> const> ConstPtr;

}; // struct TurnIDandType_

typedef ::duckietown_msgs::TurnIDandType_<std::allocator<void> > TurnIDandType;

typedef boost::shared_ptr< ::duckietown_msgs::TurnIDandType > TurnIDandTypePtr;
typedef boost::shared_ptr< ::duckietown_msgs::TurnIDandType const> TurnIDandTypeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::TurnIDandType_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::TurnIDandType_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::duckietown_msgs::TurnIDandType_<ContainerAllocator1> & lhs, const ::duckietown_msgs::TurnIDandType_<ContainerAllocator2> & rhs)
{
  return lhs.tag_id == rhs.tag_id &&
    lhs.turn_type == rhs.turn_type;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::duckietown_msgs::TurnIDandType_<ContainerAllocator1> & lhs, const ::duckietown_msgs::TurnIDandType_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::TurnIDandType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::TurnIDandType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::TurnIDandType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::TurnIDandType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::TurnIDandType_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::TurnIDandType_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::TurnIDandType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "999e690d54f4de1ab02b7e874091d0ff";
  }

  static const char* value(const ::duckietown_msgs::TurnIDandType_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x999e690d54f4de1aULL;
  static const uint64_t static_value2 = 0xb02b7e874091d0ffULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::TurnIDandType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/TurnIDandType";
  }

  static const char* value(const ::duckietown_msgs::TurnIDandType_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::TurnIDandType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 tag_id\n"
"int16 turn_type\n"
;
  }

  static const char* value(const ::duckietown_msgs::TurnIDandType_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::TurnIDandType_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.tag_id);
      stream.next(m.turn_type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TurnIDandType_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::TurnIDandType_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::TurnIDandType_<ContainerAllocator>& v)
  {
    s << indent << "tag_id: ";
    Printer<int16_t>::stream(s, indent + "  ", v.tag_id);
    s << indent << "turn_type: ";
    Printer<int16_t>::stream(s, indent + "  ", v.turn_type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_TURNIDANDTYPE_H
