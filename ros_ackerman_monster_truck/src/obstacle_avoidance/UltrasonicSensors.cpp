#include "UltrasonicSensors.h"

void UltrasonicSensors::u1_callback(const std_msgs::UInt16& us_msg)
{ROS_INFO("[%i]" , us_msg.data );}
void UltrasonicSensors::u2_callback(const std_msgs::UInt16& us_msg)
{ROS_INFO("[%i]" , us_msg.data );}
void UltrasonicSensors::u3_callback(const std_msgs::UInt16& us_msg)
{ROS_INFO("[%i]" , us_msg.data );}

void UltrasonicSensors::ultrasonic()
{
    m_sub->subscribe(m_subscriber, "ultrasonic_sensor_middle", m_nh, u1_callback);
    m_sub->subscribe(m_subscriber, "ultrasonic_sensor_left", m_nh, u2_callback);
    m_sub->subscribe(m_subscriber, "ultrasonic_sensor_right", m_nh, u3_callback);
}
