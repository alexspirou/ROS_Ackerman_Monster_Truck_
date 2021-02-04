#ifndef ULTRASONICSENSORS_H
#define ULTRASONICSENSORS_H
#include "ros/ros.h"
#include <geometry_msgs/Vector3.h>
#include "../publishers_subscribers/Subscribers.h"
#include "../movement/Motor.h"
#include "../speed_limiter/OpticalEncoder.h"
static geometry_msgs::Vector3 ultrasonic_msg;
class UltrasonicSensors
{
public:
    UltrasonicSensors() {
        m_sub->subscribe(m_subscriber, "ultrasonic_sensors", m_nh, u1_callback);
        static geometry_msgs::Vector3 ultrasonic_msg;

        }
    ~UltrasonicSensors(){delete m_sub;}

    static void u1_callback(const geometry_msgs::Vector3 us_msg){
       ROS_INFO("Middle: [%f]\nRight: [%f]\nLeft:[%f]" , us_msg.x, us_msg.y , us_msg.z );
        ultrasonic_msg = us_msg;
    }
private:
    ros::NodeHandle m_nh;
    ros::Subscriber m_subscriber;
    Subscribers* m_sub = new Subscribers();

};
#endif
