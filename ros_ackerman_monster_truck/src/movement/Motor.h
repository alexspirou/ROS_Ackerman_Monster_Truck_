#ifndef MOTOR_H
#define MOTOR_H
#include <string>
#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "../publishers_subscribers/Publishers.h"

class Motor
{

public:
Motor();
~Motor();
void move_front(int& x);
void move_back(int& x);
void stop(int x);

private:
ros::NodeHandle nh;
ros::Publisher motor_pub;
geometry_msgs::Twist msg;
std::string cmd_vel = "cmd_vel";
Publishers* pub = new Publishers();

};
#endif
