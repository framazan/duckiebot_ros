#!/usr/bin/env python3
#NOTE: first do: pip install pynput. Without this package program won't work.

import os
import rospy
from duckietown.dtros import DTROS, NodeType, TopicType
from duckietown_msgs.msg import Twist2DStamped, BoolStamped
from std_msgs.msg import String
from pynput.keyboard import Key, Listener


class MyPublisherNode(DTROS):
    def __init__(self, node_name):
        super(MyPublisherNode, self).__init__(
            node_name=node_name, node_type=NodeType.CONTROL)
        self.pub_car_cmd = rospy.Publisher(
            "/myduckie/joy_mapper_node/car_cmd", Twist2DStamped, queue_size=1, dt_topic_type=TopicType.CONTROL)
        self.v = 0.5  # .5
        self.omega = 0  # .3
        with Listener(on_press = end) as listener:
            listener.join()

    def run(self):
        rate = rospy.Rate(1)
        while not rospy.is_shutdown():
            msg = Twist2DStamped()
            msg.header.stamp = rospy.get_rostime()
            msg.v = self.v
            msg.omega = self.omega
            self.pub_car_cmd.publish(msg)
            rospy.loginfo("Sending Message")
            rate.sleep()
        rospy.loginfo("Loop over")
        self.end(Key.delete)

    def end(self, key):
        if key == Key.delete:
            msg = Twist2DStamped()
            msg.header.stamp = rospy.get_rostime()
            msg.v = 0
            msg.omega = 0
            self.pub_car_cmd.publish(msg)
            rospy.loginfo("Sending 0 to motor")
        else:
            pass


if __name__ == '__main__':
    rospy.loginfo("Starting")
    node = MyPublisherNode(node_name='my_publisher_node')
    rospy.loginfo("Running")
    node.run()
    rospy.loginfo("Spinning")
    rospy.spin()
    rospy.loginfo("Ending")