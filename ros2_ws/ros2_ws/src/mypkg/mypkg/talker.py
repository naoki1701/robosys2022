# SPDX-FileCopyrightText: 2023 Naoki Kobayashi
# SPDX-License-Identifier: BSD-3-Clause

import rclpy
from rclpy.node import Node
from person_msgs.msg import Person

rclpy.init()
node = Node("talker")
pub = node.create_publisher(Person, "person", 10)
n = 0
def cb():
    global n
    msg = Person()
    msg.name = "name"
    msg.age = 22
    publish(msg)
    n += 1

node.create_timer(0.5, cb)
rclpy.spin(node)
