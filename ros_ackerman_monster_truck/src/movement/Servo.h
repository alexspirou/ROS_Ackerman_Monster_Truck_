#ifndef SERVO_H
#define SERVO_H
#include "ros/ros.h"
#include "std_msgs/UInt16.h"
#include "geometry_msgs/Twist.h"
#include "../publishers_subscribers/Publishers.h"
class Servo
{

public:
Servo();
~Servo();
void turn_left();
void turn_right();

private:
ros::NodeHandle m_nh;
ros::Publisher servo_pub;
std_msgs::UInt16 msg;
const char* topic_name = "servo";
Publishers* m_pub = new Publishers();


};
#endif
