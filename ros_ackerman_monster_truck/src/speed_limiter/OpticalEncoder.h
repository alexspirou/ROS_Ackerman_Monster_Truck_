#ifndef OPTICALENCODER_H
#define OPTICALENCODER_H
#include "ros/ros.h"
#include <std_msgs/Int32.h>
#include "../publishers_subscribers/Subscribers.h"
#include "../movement/Motor.h"
static std_msgs::Int32 rpm;
class OpticalEncoder
{
public:
    OpticalEncoder() {
        m_sub->subscribe(m_subscriber, "optical_encoder", m_nh, oe_callback);
        static geometry_msgs::Vector3 ultrasonic_msg;

        }
    ~OpticalEncoder(){delete m_sub;}
    static void oe_callback(const std_msgs::Int32 us_msg){
       ROS_INFO("OE: %d",us_msg.data );
        rpm = us_msg;
    }

//void speed_limiter(int& speed_limit);
//static void set_msg(const std_msgs::Int32& oe_msg){m_msg.data = oe_msg.data;}
//static int get_msg(){return m_msg.data;}
private:
ros::NodeHandle m_nh;
ros::Subscriber m_subscriber;
Subscribers* m_sub = new Subscribers();
};

#endif
