#ifndef _ROS_H
#define _ROS_H

#include "ros/ros.h"
#include "std_msgs/String.h"
#include "std_msgs/UInt16.h"
#include "geometry_msgs/Twist.h"
#include "geometry_msgs/Vector3.h"
#include "QDebug"

static geometry_msgs::Vector3 ultrasonic_msg;
static void ultrasonic_callback(const geometry_msgs::Vector3 us_msg){

    ultrasonic_msg = us_msg;
    ultrasonic_msg.x = 10;
}
class _Ros
{
public:
    _Ros();
    ~_Ros();

    //cmd_vel topic
    void pwm_publisher();
    void set_pwm(int pwm_f) {pwm_msg.linear.x = pwm_f;}

    //qt_command topic
    void qt_command_publisher(unsigned f_command);

    //ultrasonic_sensors topic
    void ultrasonic_subscriber()
    {
        ultrasonic_sub = n->subscribe("ultrasonic_sensors",25,ultrasonic_callback);
        ros::spinOnce();
        qDebug() << ultrasonic_msg.x  << ultrasonic_msg.y << ultrasonic_msg.z;
        qDebug() << 2;



    }

    //optical_encoder topic
    void speed_subscriber();


private:

    ros::NodeHandle *n;
    //cmd_vel topic
    ros::Publisher pwm_pub ;
    geometry_msgs::Twist pwm_msg;
    //Qt topic
    ros::Publisher qt_command ;
    std_msgs::UInt16 command;
    //ultrasonic_sensors topic
    ros::Subscriber ultrasonic_sub;

};

#endif // _ROS_H
