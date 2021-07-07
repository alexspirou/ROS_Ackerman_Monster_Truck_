#include "_ros.h"
#include "std_msgs/UInt16.h"


_Ros::_Ros()
{
    n = new ros::NodeHandle();
    cmd_vel_pub = n->advertise<geometry_msgs::Twist>("cmd_vel", 200);
    pwm_value = n->advertise<geometry_msgs::Twist>("pwm_value", 200);
    qt_command = n->advertise<std_msgs::UInt16>("qt", 200);
    servo_command = n->advertise<std_msgs::UInt16>("servo",200);
    led_command = n->advertise<std_msgs::UInt16>("led",200);
}
_Ros::~_Ros()
{
    ros::spinOnce();
    delete n;
}
void _Ros::cmd_vel_publisher()
{
    cmd_vel_pub.publish(cmd_vel_msg);
}
void _Ros::pwm_value_publisher()
{
    pwm_value.publish(pwm_value_msg);
}
void _Ros::qt_command_publisher(unsigned short f_command)
{
    qt_msg.data = f_command;
    qt_command.publish(qt_msg);
}

void _Ros::servo_command_publisher(unsigned short f_servo_command)
{
    servo_msg.data = f_servo_command;
    servo_command.publish(servo_msg);
}
void _Ros::led_command_publisher(unsigned short f_command)
{
    led_msg.data = f_command;
    led_command.publish(led_msg);
}
