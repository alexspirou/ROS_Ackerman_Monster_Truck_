#include "UltrasonicSensors.h"
#include <string.h>
void UltrasonicSensors::u1_callback(const std_msgs::Int32& us_msg)
{
 ROS_INFO("[%i]efefefe" , us_msg.data );
// m_msg = us_msg;
}
void UltrasonicSensors::u2_callback(const std_msgs::Int32& us_msg)
{ROS_INFO("[%i]" , us_msg.data );}
void UltrasonicSensors::u3_callback(const std_msgs::Int32& us_msg)
{ROS_INFO("[%i]" , us_msg.data );}

int UltrasonicSensors::ultrasonic_sub(const char* topic_name )
{
    if(strcmp(topic_name,"ultrasonic_sensor_middle"))
        m_sub->subscribe(m_subscriber, "ultrasonic_sensor_middle", m_nh, u1_callback);
    else if(strcmp(topic_name,"ultrasonic_sensor_left"))
        m_sub->subscribe(m_subscriber, "ultrasonic_sensor_left", m_nh, u2_callback);
    else if(strcmp(topic_name,"ultrasonic_sensor_right"))
        m_sub->subscribe(m_subscriber, "ultrasonic_sensor_right", m_nh, u3_callback);
    else{ROS_ERROR("Invalid topic name for ultrasonic sensors!");}


}
