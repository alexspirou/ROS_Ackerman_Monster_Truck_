#ifndef OPTICALENCODER_H
#define OPTICALENCODER_H
#include "ros/ros.h"
#include <std_msgs/Int32.h>
#include "../publishers_subscribers/Subscribers.h"
class OpticalEncoder
{
public:
    OpticalEncoder(){}
    ~OpticalEncoder(){}

static void oe_callback(const std_msgs::Int32& oe_msg );
int optical_encoder_sub(const char* topic_name);
void speed_limiter(int& speed_limit);
static void set_msg(const std_msgs::Int32& oe_msg){m_msg.data = oe_msg.data;}
static int get_msg(){return m_msg.data;}
private:
ros::NodeHandle m_nh;
ros::Subscriber m_subscriber;
Subscribers* m_sub = new Subscribers();
static std_msgs::Int32 m_msg;



};
#endif
