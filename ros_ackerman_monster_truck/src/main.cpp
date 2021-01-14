#include "ros/ros.h"
#include "std_msgs/String.h"
#include "geometry_msgs/Twist.h"
#include <sstream>
#include "publishers_subscribers/Publishers.h"
#include "movement/Motor.h"
#include <string>
#include "obstacle_avoidance/UltrasonicSensors.h"


int main(int argc, char **argv)
{


  ros::init(argc, argv, "s");
  ros::Rate loop_rate(20);
  ros::NodeHandle n;
  ros::Publisher publisher_name = n.advertise<geometry_msgs::Twist>("cmd_vel", 1000);
  geometry_msgs::Twist msg;
  msg.linear.x = 40;
  while (ros::ok())
  {

   loop_rate.sleep();
//   motor->move_front(speed);
   publisher_name.publish(msg);
   loop_rate.sleep();
   ros::spinOnce();

  }


  return 0;
}
