#ifndef PUBLISHERS_H
#define PUBLISHERS_H
#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

struct Publishers
{
public:
Publishers(){}
~Publishers(){}

template<typename T>
void init(ros::Publisher& publisher_name, const char* topic_name, ros::NodeHandle& n)
{
    publisher_name = n.advertise<T>(topic_name, 25);
}
template<typename T>
void publish(ros::Publisher& publisher_name, T& msg)
{
    publisher_name.publish(msg);
}

};
#endif
