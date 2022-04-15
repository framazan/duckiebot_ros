# Install script for directory: /home/filip/duckiebot_ros/src/duckietown_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/filip/duckiebot_ros/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/duckietown_msgs/msg" TYPE FILE FILES
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/AntiInstagramThresholds.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/AprilTagDetection.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/AprilTagDetectionArray.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/AprilTagsWithInfos.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/BoolStamped.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/ButtonEvent.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/CarControl.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/CoordinationClearance.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/CoordinationSignal.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/DiagnosticsCodeProfiling.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/DiagnosticsCodeProfilingArray.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/DiagnosticsRosLink.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/DiagnosticsRosLinkArray.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/DiagnosticsRosNode.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/DiagnosticsRosParameterArray.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/DiagnosticsRosTopic.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/DiagnosticsRosTopicArray.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/DisplayFragment.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/DroneControl.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/DroneMode.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/NodeParameter.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/DuckiebotLED.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/EncoderStamped.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/EpisodeStart.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/FSMState.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/IntersectionPose.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/IntersectionPoseImg.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/IntersectionPoseImgDebug.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/KinematicsParameters.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/KinematicsWeights.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/LanePose.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/LEDDetection.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/LEDDetectionArray.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/LEDDetectionDebugInfo.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/LEDInterpreter.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/LEDPattern.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/LightSensor.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/LineFollowerStamped.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/MaintenanceState.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/ObstacleImageDetection.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/ObstacleImageDetectionList.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/ObstacleProjectedDetection.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/ObstacleProjectedDetectionList.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/ObstacleType.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/ParamTuner.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/Pixel.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/Pose2DStamped.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/Rect.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/Rects.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/SceneSegments.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/Segment.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/SegmentList.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/SignalsDetection.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/SignalsDetectionETHZ17.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/SourceTargetNodes.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/StopLineReading.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/TagInfo.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/ThetaDotSample.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/Trajectory.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/TurnIDandType.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/Twist2DStamped.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/Vector2D.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/VehicleCorners.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/VehiclePose.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/Vsample.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/WheelEncoderStamped.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/WheelsCmd.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/WheelsCmdStamped.msg"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/msg/WheelsCmdDBV2Stamped.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/duckietown_msgs/srv" TYPE FILE FILES
    "/home/filip/duckiebot_ros/src/duckietown_msgs/srv/ChangePattern.srv"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/srv/GetVariable.srv"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/srv/IMUstatus.srv"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/srv/LFstatus.srv"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/srv/NodeGetParamsList.srv"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/srv/NodeRequestParamsUpdate.srv"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/srv/SensorsStatus.srv"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/srv/SetCustomLEDPattern.srv"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/srv/SetFSMState.srv"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/srv/SetValue.srv"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/srv/SetVariable.srv"
    "/home/filip/duckiebot_ros/src/duckietown_msgs/srv/ToFstatus.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/duckietown_msgs/cmake" TYPE FILE FILES "/home/filip/duckiebot_ros/build/duckietown_msgs/catkin_generated/installspace/duckietown_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/filip/duckiebot_ros/devel/include/duckietown_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/filip/duckiebot_ros/devel/share/roseus/ros/duckietown_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/filip/duckiebot_ros/devel/share/common-lisp/ros/duckietown_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/filip/duckiebot_ros/devel/share/gennodejs/ros/duckietown_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/filip/duckiebot_ros/devel/lib/python3/dist-packages/duckietown_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/filip/duckiebot_ros/devel/lib/python3/dist-packages/duckietown_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/filip/duckiebot_ros/build/duckietown_msgs/catkin_generated/installspace/duckietown_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/duckietown_msgs/cmake" TYPE FILE FILES "/home/filip/duckiebot_ros/build/duckietown_msgs/catkin_generated/installspace/duckietown_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/duckietown_msgs/cmake" TYPE FILE FILES
    "/home/filip/duckiebot_ros/build/duckietown_msgs/catkin_generated/installspace/duckietown_msgsConfig.cmake"
    "/home/filip/duckiebot_ros/build/duckietown_msgs/catkin_generated/installspace/duckietown_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/duckietown_msgs" TYPE FILE FILES "/home/filip/duckiebot_ros/src/duckietown_msgs/package.xml")
endif()

