import rospy
from std_msgs.msg import Float32MultiArray

def callback(msg):
  print(msg)

rospy.init_node("array_sub")

rospy.Subscriber('/data', Float32MultiArray, callback)
rospy.spin()
