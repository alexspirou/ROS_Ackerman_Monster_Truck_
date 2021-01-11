#include "ros/ros.h"
#include "std_msgs/String.h"
#include "geometry_msgs/Twist.h"
#include <sstream>
#include "publishers_subscribers/Publishers.h"
#include "movement/Motor.h"
#include <string>
int main(int argc, char **argv)
{


  ros::init(argc, argv, "Monster_Truck");
//  ros::NodeHandle nh;
//  ros::Publisher motor_pub;
//  geometry_msgs::Twist msg;
//  std::string cmd_vel = "cmd_vel";
//  Publishers* pub = new Publishers();
//  pub->init<geometry_msgs::Twist>(motor_pub,cmd_vel,nh);
    Motor* motor = new Motor();


  ros::Rate loop_rate(20);
//  ros::Publisher motor_pub = n.advertise<geometry_msgs::Twist>("cmd_vel", 1000);


int speed = 0;


  while (ros::ok())
  {

//   msg.linear.x = 0;
//   pub->publish(motor_pub,msg);
   motor->move_front(speed);
   loop_rate.sleep();
   motor->move_back(speed);
   loop_rate.sleep();
   ros::spinOnce();

  }

  delete motor;
  return 0;
}
