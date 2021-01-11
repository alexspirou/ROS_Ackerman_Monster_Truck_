#include "Publishers.h"


Publishers::Publishers()
{

}

void Publishers::motor_pub(int speed)
{
    ros::Publisher motor_pub = n.advertise<geometry_msgs::Twist>("cmd_vel", 1000);
    motor.linear.x = speed;
    motor_pub.publish(motor);
    ROS_ERROR_STREAM("ee: ");



}
