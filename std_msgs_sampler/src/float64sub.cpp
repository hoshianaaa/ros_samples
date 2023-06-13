#include <ros/ros.h>
#include <std_msgs/Float64.h>

void chatterCallback(const std_msgs::Float64& msg)
{
  ROS_INFO("data:%f", msg.data);
}

int main(int argc, char** argv)
{
  ros::init(argc, argv, "basic_array_listener");
  ros::NodeHandle nh;
  ros::Subscriber sub = nh.subscribe("data", 1000, chatterCallback);

  ros::spin();
  return 0;
}
