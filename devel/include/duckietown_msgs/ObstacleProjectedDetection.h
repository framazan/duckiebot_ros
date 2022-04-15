// Generated by gencpp from file duckietown_msgs/ObstacleProjectedDetection.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_OBSTACLEPROJECTEDDETECTION_H
#define DUCKIETOWN_MSGS_MESSAGE_OBSTACLEPROJECTEDDETECTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>
#include <duckietown_msgs/ObstacleType.h>

namespace duckietown_msgs
{
template <class ContainerAllocator>
struct ObstacleProjectedDetection_
{
  typedef ObstacleProjectedDetection_<ContainerAllocator> Type;

  ObstacleProjectedDetection_()
    : location()
    , type()
    , distance(0.0)  {
    }
  ObstacleProjectedDetection_(const ContainerAllocator& _alloc)
    : location(_alloc)
    , type(_alloc)
    , distance(0.0)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _location_type;
  _location_type location;

   typedef  ::duckietown_msgs::ObstacleType_<ContainerAllocator>  _type_type;
  _type_type type;

   typedef float _distance_type;
  _distance_type distance;





  typedef boost::shared_ptr< ::duckietown_msgs::ObstacleProjectedDetection_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::ObstacleProjectedDetection_<ContainerAllocator> const> ConstPtr;

}; // struct ObstacleProjectedDetection_

typedef ::duckietown_msgs::ObstacleProjectedDetection_<std::allocator<void> > ObstacleProjectedDetection;

typedef boost::shared_ptr< ::duckietown_msgs::ObstacleProjectedDetection > ObstacleProjectedDetectionPtr;
typedef boost::shared_ptr< ::duckietown_msgs::ObstacleProjectedDetection const> ObstacleProjectedDetectionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::ObstacleProjectedDetection_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::ObstacleProjectedDetection_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::duckietown_msgs::ObstacleProjectedDetection_<ContainerAllocator1> & lhs, const ::duckietown_msgs::ObstacleProjectedDetection_<ContainerAllocator2> & rhs)
{
  return lhs.location == rhs.location &&
    lhs.type == rhs.type &&
    lhs.distance == rhs.distance;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::duckietown_msgs::ObstacleProjectedDetection_<ContainerAllocator1> & lhs, const ::duckietown_msgs::ObstacleProjectedDetection_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::ObstacleProjectedDetection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::ObstacleProjectedDetection_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::ObstacleProjectedDetection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::ObstacleProjectedDetection_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::ObstacleProjectedDetection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::ObstacleProjectedDetection_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::ObstacleProjectedDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cb503445da742d4aa1f69f0b72163c00";
  }

  static const char* value(const ::duckietown_msgs::ObstacleProjectedDetection_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcb503445da742d4aULL;
  static const uint64_t static_value2 = 0xa1f69f0b72163c00ULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::ObstacleProjectedDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/ObstacleProjectedDetection";
  }

  static const char* value(const ::duckietown_msgs::ObstacleProjectedDetection_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::ObstacleProjectedDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Point location\n"
"duckietown_msgs/ObstacleType type\n"
"float32 distance\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: duckietown_msgs/ObstacleType\n"
"uint8 DUCKIE=0\n"
"uint8 CONE=1\n"
"uint8 type\n"
;
  }

  static const char* value(const ::duckietown_msgs::ObstacleProjectedDetection_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::ObstacleProjectedDetection_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.location);
      stream.next(m.type);
      stream.next(m.distance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ObstacleProjectedDetection_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::ObstacleProjectedDetection_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::ObstacleProjectedDetection_<ContainerAllocator>& v)
  {
    s << indent << "location: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.location);
    s << indent << "type: ";
    s << std::endl;
    Printer< ::duckietown_msgs::ObstacleType_<ContainerAllocator> >::stream(s, indent + "  ", v.type);
    s << indent << "distance: ";
    Printer<float>::stream(s, indent + "  ", v.distance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_OBSTACLEPROJECTEDDETECTION_H
