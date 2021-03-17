#ifndef RVIZ_H
#define RVIZ_H
#include "ros/ros.h"
#include "geometry_msgs/Transform.h"
#include "geometry_msgs/TransformStamped.h"
#include "sensor_msgs/JointState.h"
#include "std_msgs/Header.h"

class rviz
{
public:
    rviz();
    //rviz
    void move_left_rear();
    void move_right_rear();
    void move_left_rear_b();
    void move_right_rear_b();
    void turn_right_pressed();
    void turn_left_pressed();
    void turn_right_released();
    void turn_left_released();
private:
    ros::NodeHandle *n;
    //rviz
    ros::Publisher rviz_publisher;
    sensor_msgs::JointState left_rear;
    sensor_msgs::JointState right_rear;
    sensor_msgs::JointState left_front;
    sensor_msgs::JointState right_front;
    ros::Time begin;
    geometry_msgs::TransformStamped*  transform;
    std_msgs::Header header;
    double x = 0;
    double speed =0;
};

#endif // RVIZ_H
