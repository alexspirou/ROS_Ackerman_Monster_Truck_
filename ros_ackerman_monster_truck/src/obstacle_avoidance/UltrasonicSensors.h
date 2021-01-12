#ifndef ULTRASONICSENSORS_H
#define ULTRASONICSENSORS_H
#include "ros/ros.h"
#include <std_msgs/UInt16.h>
#include "../publishers_subscribers/Subscribers.h"
class UltrasonicSensors
{

public:
UltrasonicSensors();
~UltrasonicSensors();

int u1_callback();
void ultrasonic(const char* topic_name);



private:
ros::NodeHandle nh;
ros::Subscriber subscriber;
Subscribers* sub = new Subscribers();
std_msgs::UInt16 us_msg;

};
#endif
