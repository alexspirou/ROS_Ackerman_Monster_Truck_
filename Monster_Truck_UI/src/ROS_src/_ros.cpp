#include "_ros.h"
#include "std_msgs/UInt16.h"


_Ros::_Ros()
{
    n = new ros::NodeHandle();
    pwm_pub = n->advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 200);
    qt_command = n->advertise<std_msgs::UInt16>("qt", 200);
    qt_command_publisher(0);
    set_pwm(0);
    pwm_publisher();


}
_Ros::~_Ros()
{
    set_pwm(0);
    qt_command_publisher(0);

    pwm_publisher();
    ros::Duration(0.1).sleep();
     ros::spinOnce();
    delete n;
}
void _Ros::pwm_publisher()
{

    pwm_pub.publish(pwm_msg);
}

void _Ros::qt_command_publisher(unsigned f_command)
{
    command.data = f_command;
    qt_command.publish(command);
}

void _Ros::speed_subscriber()
{

}
