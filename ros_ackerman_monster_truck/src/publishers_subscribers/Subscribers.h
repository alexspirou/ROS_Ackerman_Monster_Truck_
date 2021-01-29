#ifndef SUBSCIBERS_H
#define SUBSCIBERS_H
#include "ros/ros.h"
#include <string>
#include <std_msgs/UInt16.h>
struct Subscribers
{

    Subscribers() {}
    ~Subscribers(){}
template<typename T>
void subscribe(ros::Subscriber& subscriber, const char* topic_name, ros::NodeHandle& n,  T callback)
{
   subscriber = n.subscribe(topic_name, 50, callback);
}
};
#endif
