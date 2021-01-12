#ifndef SUBSCIBERS_H
#define SUBSCIBERS_H
#include "ros/ros.h"
#include <string>
#include <std_msgs/UInt16.h>
class Subscribers
{

public:
Subscribers();
~Subscribers();

void subscribe(ros::Subscriber& subscriber, const char* topic_name, ros::NodeHandle& n,  std_msgs::UInt16callback)
{
   subscriber = n.subscribe(topic_name, 1000, callback);
}




};
#endif
