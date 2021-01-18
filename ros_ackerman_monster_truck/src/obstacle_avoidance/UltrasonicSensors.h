#ifndef ULTRASONICSENSORS_H
#define ULTRASONICSENSORS_H
#include "ros/ros.h"
#include <std_msgs/Int32.h>
#include "../publishers_subscribers/Subscribers.h"
class UltrasonicSensors
{

public:
    UltrasonicSensors() {}
    ~UltrasonicSensors(){}

static void u1_callback(const std_msgs::Int32& us_msg);
static void u2_callback(const std_msgs::Int32& us_msg);
static void u3_callback(const std_msgs::Int32& us_msg);
int ultrasonic_sub(const char* topic_name);
static std_msgs::Int32 m_msg;


private:
ros::NodeHandle m_nh;
ros::Subscriber m_subscriber;
Subscribers* m_sub = new Subscribers();

};
#endif
