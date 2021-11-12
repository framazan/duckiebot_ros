cmake_minimum_required(VERSION 2.8.3)
project(package_dts)

find_package(catkin REQUIRED COMPONENTS
    rospy
)
catkin_package()