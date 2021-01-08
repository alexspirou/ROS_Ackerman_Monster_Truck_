#ifndef PUBLISHERS_H
#define PUBLISHERS_H
#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

class Publishers
{

public:
Publishers();
void motor_pub(int speed);

void servo_pub(int speed) {  ros::Publisher servo_pub = n.advertise<geometry_msgs::Twist>("servo", 1000);
}

ros::NodeHandle get_n() {return n;}

private:

geometry_msgs::Twist motor;
ros::NodeHandle n;

};
#endif
