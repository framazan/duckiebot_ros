// Generated by gencpp from file duckietown_msgs/LEDPattern.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_LEDPATTERN_H
#define DUCKIETOWN_MSGS_MESSAGE_LEDPATTERN_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <std_msgs/ColorRGBA.h>

namespace duckietown_msgs
{
template <class ContainerAllocator>
struct LEDPattern_
{
  typedef LEDPattern_<ContainerAllocator> Type;

  LEDPattern_()
    : header()
    , color_list()
    , rgb_vals()
    , color_mask()
    , frequency(0.0)
    , frequency_mask()  {
    }
  LEDPattern_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , color_list(_alloc)
    , rgb_vals(_alloc)
    , color_mask(_alloc)
    , frequency(0.0)
    , frequency_mask(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _color_list_type;
  _color_list_type color_list;

   typedef std::vector< ::std_msgs::ColorRGBA_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::ColorRGBA_<ContainerAllocator> >::other >  _rgb_vals_type;
  _rgb_vals_type rgb_vals;

   typedef std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other >  _color_mask_type;
  _color_mask_type color_mask;

   typedef float _frequency_type;
  _frequency_type frequency;

   typedef std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other >  _frequency_mask_type;
  _frequency_mask_type frequency_mask;





  typedef boost::shared_ptr< ::duckietown_msgs::LEDPattern_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::LEDPattern_<ContainerAllocator> const> ConstPtr;

}; // struct LEDPattern_

typedef ::duckietown_msgs::LEDPattern_<std::allocator<void> > LEDPattern;

typedef boost::shared_ptr< ::duckietown_msgs::LEDPattern > LEDPatternPtr;
typedef boost::shared_ptr< ::duckietown_msgs::LEDPattern const> LEDPatternConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::LEDPattern_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::LEDPattern_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::duckietown_msgs::LEDPattern_<ContainerAllocator1> & lhs, const ::duckietown_msgs::LEDPattern_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.color_list == rhs.color_list &&
    lhs.rgb_vals == rhs.rgb_vals &&
    lhs.color_mask == rhs.color_mask &&
    lhs.frequency == rhs.frequency &&
    lhs.frequency_mask == rhs.frequency_mask;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::duckietown_msgs::LEDPattern_<ContainerAllocator1> & lhs, const ::duckietown_msgs::LEDPattern_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::LEDPattern_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::LEDPattern_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::LEDPattern_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::LEDPattern_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::LEDPattern_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::LEDPattern_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::LEDPattern_<ContainerAllocator> >
{
  static const char* value()
  {
    return "47c8633688bbd1c94b1e15be083240b6";
  }

  static const char* value(const ::duckietown_msgs::LEDPattern_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x47c8633688bbd1c9ULL;
  static const uint64_t static_value2 = 0x4b1e15be083240b6ULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::LEDPattern_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/LEDPattern";
  }

  static const char* value(const ::duckietown_msgs::LEDPattern_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::LEDPattern_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"string[]  color_list\n"
"std_msgs/ColorRGBA[]  rgb_vals\n"
"int8[]    color_mask\n"
"float32   frequency\n"
"int8[]    frequency_mask\n"
"\n"
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
"\n"
"================================================================================\n"
"MSG: std_msgs/ColorRGBA\n"
"float32 r\n"
"float32 g\n"
"float32 b\n"
"float32 a\n"
;
  }

  static const char* value(const ::duckietown_msgs::LEDPattern_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::LEDPattern_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.color_list);
      stream.next(m.rgb_vals);
      stream.next(m.color_mask);
      stream.next(m.frequency);
      stream.next(m.frequency_mask);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LEDPattern_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::LEDPattern_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::LEDPattern_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "color_list[]" << std::endl;
    for (size_t i = 0; i < v.color_list.size(); ++i)
    {
      s << indent << "  color_list[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.color_list[i]);
    }
    s << indent << "rgb_vals[]" << std::endl;
    for (size_t i = 0; i < v.rgb_vals.size(); ++i)
    {
      s << indent << "  rgb_vals[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "    ", v.rgb_vals[i]);
    }
    s << indent << "color_mask[]" << std::endl;
    for (size_t i = 0; i < v.color_mask.size(); ++i)
    {
      s << indent << "  color_mask[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.color_mask[i]);
    }
    s << indent << "frequency: ";
    Printer<float>::stream(s, indent + "  ", v.frequency);
    s << indent << "frequency_mask[]" << std::endl;
    for (size_t i = 0; i < v.frequency_mask.size(); ++i)
    {
      s << indent << "  frequency_mask[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.frequency_mask[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_LEDPATTERN_H
