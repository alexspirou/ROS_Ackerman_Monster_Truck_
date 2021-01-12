#include "UltrasonicSensors.h"
UltrasonicSensors::UltrasonicSensors()
{
}
UltrasonicSensors::~UltrasonicSensors()
{
}
int UltrasonicSensors::u1_callback()
{

    ROS_INFO("[%i]" , us_msg.data );
    return us_msg.data;
}
void UltrasonicSensors::ultrasonic(const char* topic_name)
{

    sub->subscribe<std_msgs::UInt16>(subscriber, topic_name, nh, us_msg);
}
