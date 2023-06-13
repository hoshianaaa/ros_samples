#include <ros/ros.h>
#include <std_msgs/Float64.h>

int main(int argc, char** argv)
{
  ros::init(argc, argv, "basic_array_listener");
  ros::NodeHandle nh;
  ros::Publisher pub = nh.advertise<std_msgs::Float64>("data", 10);

  ros::Rate loop_rate(1);
  while (ros::ok())
  {
    std_msgs::Float64 msg;
    msg.data = 1.0;
    pub.publish(msg);
    ROS_INFO("I published !");
    ros::spinOnce();
    loop_rate.sleep();
  }

  return 0;
}
