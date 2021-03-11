#include "_ros.h"
#include "std_msgs/UInt16.h"


_Ros::_Ros()
{
    n = new ros::NodeHandle();
    pwm_pub = n->advertise<geometry_msgs::Twist>("cmd_vel", 200);
    qt_command = n->advertise<std_msgs::UInt16>("qt", 200);
    servo_command = n->advertise<std_msgs::UInt16>("servo",200);
    rviz_publisher = n->advertise<sensor_msgs::JointState>("joint_states", 200);
    qt_command_publisher(0);
    set_pwm(0);
    pwm_publisher();
    left_wheel_front.name.push_back("joint_left_wheel_f");
    left_wheel_front.position.push_back(3);

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
    qt_comm.data = f_command;
    qt_command.publish(qt_comm);
}

void _Ros::servo_command_publisher(unsigned f_servo_command){
    servo_comm.data = f_servo_command;
    servo_command.publish(servo_comm);
}

void _Ros::speed_subscriber()
{

}
void _Ros::left_wheel_front_publisher(){


    rviz_publisher.publish(left_wheel_front);


}
