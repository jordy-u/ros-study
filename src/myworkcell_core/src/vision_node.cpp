

/**
**  Simple ROS Node
**/
#include <ros/ros.h>
#include <myworkcell_core/LocalizePart.h>

bool localizePart(myworkcell_core::LocalizePart::Request& req,
                  myworkcell_core::LocalizePart::Response& res)
{
  // Read last message
  geometry_msgs::Pose p;
  p.position.x = 1;
  p.position.y = 2;
  p.position.z = 3;

  res.pose = p;
  return true;
}

int main(int argc, char* argv[])
{
  // This must be called before anything else ROS-related
  ros::init(argc, argv, "vision_node");

  // Create a ROS node handle
  ros::NodeHandle nh;

  ROS_INFO("Hello, World!");
  ROS_ERROR("This is a test error!");

  ros::ServiceServer server_ = nh.advertiseService("localize_part", localizePart);

  // Don't exit the program.
  ros::spin();
}

