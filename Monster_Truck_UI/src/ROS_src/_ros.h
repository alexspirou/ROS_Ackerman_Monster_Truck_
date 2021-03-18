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
    void pwm_publisher();
    void set_pwm(int pwm_f) {pwm_msg.linear.x = pwm_f;}
    void set_pwm_z(int pwm_f) {pwm_msg.angular.z = pwm_f;}
    //qt_command topic
    void qt_command_publisher(unsigned f_command);
    //Servo topic
    void servo_command_publisher(unsigned f_servo_command);
    void set_servo_command(int servo_command_f);

    //ultrasonic_sensors topic
    static void ultrasonic_callback(const geometry_msgs::Vector3::ConstPtr& us_msg){


//        ROS_INFO("Middle: [%f]\nRight: [%f]\nLeft:[%f]" , us_msg->x, us_msg->y , us_msg->z );

        ultrasonic_msg = *us_msg;
        //qDebug() << us_msg->x << us_msg->y << us_msg->z;
    }
    void ultrasonic_subscriber()
    {
        ros::Rate loop_rate(5);
        ultrasonic_sub = n->subscribe("ultrasonic_sensors",100,ultrasonic_callback);
        loop_rate.sleep();
        ros::spinOnce();

    }
    //Optical encoder topic
    static void oe_callback(const std_msgs::Int32 ::ConstPtr& us_msg){


//        ROS_INFO("Middle: [%f]\nRight: [%f]\nLeft:[%f]" , us_msg->x, us_msg->y , us_msg->z );

        optical_encoder_msg = *us_msg;
        //qDebug() << us_msg->x << us_msg->y << us_msg->z;
    }
    void oe_subscriber()
    {
        ros::Rate loop_rate(5);
        optical_encoder_sub = n->subscribe("optical_encoder",100,oe_callback);
        loop_rate.sleep();
        ros::spinOnce();

    }



    void speed_subscriber();
private:

    ros::NodeHandle *n;
    //cmd_vel topic
    ros::Publisher pwm_pub ;
    geometry_msgs::Twist pwm_msg;
    //Qt topic
    ros::Publisher qt_command ;
    std_msgs::UInt16 qt_comm;
    //Servo topic
    ros::Publisher servo_command ;
    std_msgs::UInt16 servo_comm;
    //ultrasonic_sensors topic
    ros::Subscriber ultrasonic_sub;
    //Optical encoder topic
    ros::Subscriber optical_encoder_sub;


};

#endif // _ROS_H
