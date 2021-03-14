#include "_ros.h"
#include "std_msgs/UInt16.h"


_Ros::_Ros()
{
    n = new ros::NodeHandle();
    pwm_pub = n->advertise<geometry_msgs::Twist>("cmd_vel", 200);
    qt_command = n->advertise<std_msgs::UInt16>("qt", 200);
    servo_command = n->advertise<std_msgs::UInt16>("servo",200);
    qt_command_publisher(0);
    set_pwm(0);
    pwm_publisher();
//    left_wheel_front = new tf2_msgs::TFMessage();
//    left_wheel_joint.name.push_back("joint_left_wheel_f");
//    left_wheel_joint.position.push_back(1);
//    left_wheel_joint.velocity.push_back(20);
    rviz_publisher = n->advertise<tf2_msgs::TFMessage>("/tf", 200);
    transform.rotation.w = 1;
    transform.translation.y = 0.3;
    transform.translation.z = 0.0;
    transform.rotation.z = 1.0;
    header.stamp.now();
    header.frame_id = "link_left_f_2";
    left_wheel_front->transforms.emplace_back(transform);
    
    
    begin = ros::Time::now();
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

//    left_wheel_front->transforms.at(0).header.stamp.now();
//    left_wheel_front->transforms.at(0).transform.rotation.w = 2;
   rviz_publisher.publish(*left_wheel_front);


//    left_wheel_joint.header.stamp.sec = begin.toSec() + 100;
//    x += -0.2;

//    left_wheel_joint.position.at(0) = x;
//    left_wheel_joint.velocity.at(0)= 10;
//    rviz_publisher.publish(left_wheel_joint);


}
void _Ros::turn_right(){


}
