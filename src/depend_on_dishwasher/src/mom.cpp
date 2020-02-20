#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "mom");
  ros::NodeHandle nh;
  
  ROS_INFO("Mom is ready to do the dishes!");

  ros::spin();
}

