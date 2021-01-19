#include "UltrasonicSensors.h"
#include <string.h>

int UltrasonicSensors::m_msg = 0;
void UltrasonicSensors::u1_callback(const std_msgs::Int32& us_msg)
{
 ROS_INFO("[%i]efefefe" , us_msg.data );
    m_msg = us_msg.data;

}
void UltrasonicSensors::u2_callback(const std_msgs::Int32& us_msg){

    ROS_INFO("Left Ultrasonic[%i]" , us_msg.data );
//    m_msg = us_msg.data;
}
void UltrasonicSensors::u3_callback(const std_msgs::Int32& us_msg)
{ROS_INFO("[%i]" , us_msg.data );}

int UltrasonicSensors::ultrasonic_sub()
{
    m_sub->subscribe(m_subscriber, "ultrasonic_sensor_mid", m_nh, u1_callback);
    return m_msg;

}
