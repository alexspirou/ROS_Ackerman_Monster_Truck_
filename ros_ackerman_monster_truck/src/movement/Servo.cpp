#include "Servo.h"
#include <string>
Servo::Servo()
{
    m_pub->init<std_msgs::UInt16>(servo_pub,topic_name,m_nh);
}
Servo::~Servo()
{
    delete m_pub;
}
void Servo::turn_left()
{

    msg.data = 0; //Arduino Subscribe 2 and turn left
    m_pub->publish(servo_pub,msg);
//    ROS_INFO("Servo left %i",msg.data);
}
void Servo::turn_right()
{
    msg.data = 0;
//    ROS_INFO("Servo right %i",msg.data);
    m_pub->publish(servo_pub,msg);

}
