#include "ros/ros.h"
#include "std_msgs/String.h"
#include "geometry_msgs/Twist.h"
#include <sstream>
#include "publishers/Publishers.h"

int main(int argc, char **argv)
{


  ros::init(argc, argv, "Monster_Truck");
  Publishers* pub = new Publishers;

//  ros::NodeHandle n;
//  geometry_msgs::Twist motor;



  ros::Rate loop_rate(10);
//  ros::Publisher motor_pub = n.advertise<geometry_msgs::Twist>("cmd_vel", 1000);





  while (ros::ok())
  {

   pub->motor_pub(50);
//  motor.linear.x = 0;
//  motor_pub.publish(motor);
  loop_rate.sleep();
    ros::spinOnce();

  }

  delete pub;
  return 0;
}
