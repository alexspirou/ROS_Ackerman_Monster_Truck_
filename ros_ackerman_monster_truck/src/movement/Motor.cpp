#include "Motor.h"

Motor::Motor()
{
    pub->init<geometry_msgs::Twist>(motor_pub,cmd_vel,nh);
}
Motor::~Motor()
{
////    int x = 0;
//    move_front(x);
//    delete pub;
}

void Motor::move_front(int& x)
{
    msg.linear.x = x;
    pub->publish(motor_pub,msg);
//    ROS_INFO(" %i", x);
}
void Motor::move_back(int& x)
{
   msg.linear.x = -x;
   pub->publish(motor_pub,msg);
//   ROS_INFO(" %i", x);
}
void Motor::stop(int x)
{
   msg.linear.x = x;
   pub->publish(motor_pub,msg);
//   ROS_INFO("stop");
}
