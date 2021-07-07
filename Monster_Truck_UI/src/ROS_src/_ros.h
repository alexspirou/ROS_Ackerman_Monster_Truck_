#ifndef _ROS_H
#define _ROS_H

#include "ros/ros.h"
#include "std_msgs/String.h"
#include "std_msgs/UInt16.h"
#include "geometry_msgs/Twist.h"
#include "geometry_msgs/Vector3.h"
#include "tf2_msgs/TFMessage.h"
#include "QDebug"

#include "geometry_msgs/Transform.h"
#include "geometry_msgs/TransformStamped.h"
#include "sensor_msgs/JointState.h"
#include "std_msgs/Header.h"
#include "std_msgs/Int32.h"

static geometry_msgs::Vector3 ultrasonic_msg;
static std_msgs::Int32 optical_encoder_msg;

class _Ros
{
public:
    _Ros();
    ~_Ros();

    //cmd_vel topic
    //Publish to cmd_vel pwm values
    void cmd_vel_publisher();
    //Set specific pwm value in linear.x
    void set_cmd_vel_msg(int pwm_f) {cmd_vel_msg.linear.x = pwm_f;}

    //pwm_value topic
    void pwm_value_publisher();
    //Set specific pwm value in linear.x
    void set_pwm_value(int pwm_f) {pwm_value_msg.linear.x = pwm_f;}

    //qt_command topic

    //Publish qt commands
    void qt_command_publisher(unsigned short  f_command);

    //Servo topic

    //Publish servo commands
    void servo_command_publisher(unsigned short f_servo_command);
    //Set specific servo value
    void set_servo_command(int servo_command_f);

    //Led topic

    //Publish LED commandss
    void led_command_publisher(unsigned short  f_command);


    //ultrasonic_sensors topic

    static void ultrasonic_callback(const geometry_msgs::Vector3::ConstPtr& us_msg)
    {
        ultrasonic_msg = *us_msg;
    }
    void ultrasonic_subscriber()
    {
        ros::Rate loop_rate(5);
        ultrasonic_sub = n->subscribe("ultrasonic_sensors",100,ultrasonic_callback);
        loop_rate.sleep();
        ros::spinOnce();

    }
    //Optical encoder topic

    static void oe_callback(const std_msgs::Int32 ::ConstPtr& us_msg)
    {
        optical_encoder_msg = *us_msg;
    }
    void oe_subscriber()
    {
        ros::Rate loop_rate(5);
        optical_encoder_sub = n->subscribe("optical_encoder",100,oe_callback);
        loop_rate.sleep();
        ros::spinOnce();
    }

private:

    ros::NodeHandle *n;
    //cmd_vel topic
    ros::Publisher cmd_vel_pub ;
    geometry_msgs::Twist cmd_vel_msg;
    //Pwm_value topic
    ros::Publisher pwm_value ;
    geometry_msgs::Twist pwm_value_msg;
    //Qt topic
    ros::Publisher qt_command ;
    std_msgs::UInt16 qt_msg;
    //Servo topic
    ros::Publisher servo_command ;
    std_msgs::UInt16 servo_msg;
    //ultrasonic_sensors topic
    ros::Subscriber ultrasonic_sub;
    //Optical encoder topic
    ros::Subscriber optical_encoder_sub;
    //Led topic
    ros::Publisher led_command ;
    std_msgs::UInt16 led_msg;


};

#endif // _ROS_H
