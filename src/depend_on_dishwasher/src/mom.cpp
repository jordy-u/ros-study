/*
#include <myworkcell_core/DoDishesAction.h> // Note: "Action" is appended
#include <actionlib/client/simple_action_client.h>

typedef actionlib::SimpleActionClient<myworkcell_core::DoDishesAction> Client;

int main(int argc, char** argv)
{
  ros::init(argc, argv, "do_dishes_client");
  Client client("do_dishes", true); // true -> don't need ros::spin()
  client.waitForServer();
  myworkcell_core::DoDishesGoal goal;
  // Fill in goal here
  client.sendGoal(goal);
  client.waitForResult(ros::Duration(5.0));
  if (client.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
    printf("Yay! The dishes are now clean");
  printf("Current State: %s\n", client.getState().toString().c_str());
  return 0;
}*/

#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "mom");
  ros::NodeHandle nh;
  
  ROS_INFO("Mom is ready to do the dishes!");

  ros::spin();
}

