#include "rviz.h"

rviz::rviz()
{
    n = new ros::NodeHandle();
    left_rear.name.push_back("joint_left_wheel_rear");
    left_rear.position.push_back(0);
    left_rear.velocity.push_back(50);

    right_rear.name.push_back("joint_right_wheel_rear");
    right_rear.position.push_back(0);
    right_rear.velocity.push_back(50);

    left_front.name.push_back("joint_left_wheel_front");
    left_front.position.push_back(0);
    left_front.velocity.push_back(50);

    right_front.name.push_back("joint_right_wheel_front");
    right_front.position.push_back(0);
    right_front.velocity.push_back(50);

    begin = ros::Time::now();


    rviz_publisher = n->advertise<sensor_msgs::JointState>("/joint_states", 200);

//    transform = new geometry_msgs::TransformStamped();
//    left_wheel_front = new tf2_msgs::TFMessage();
//    transform->transform.translation.x = - 0.2;
//    transform->transform.translation.y = 0.3;
//    transform->transform.translation.z = 0.0;
//    transform->transform.rotation.y = 0;
//    transform->transform.rotation.z =1;
//    transform->header.frame_id = "link_left_f_2";
//    transform->child_frame_id = "left_wheel_f";
//    transform->header.stamp.sec = begin.now().toSec() + 100;
//    left_wheel_front->transforms.emplace_back(*transform);
}
void rviz::move_left_rear(){

    x += 0.1;
    left_rear.header.stamp.now();
    left_rear.position.at(0) = x;
    left_rear.velocity.at(0)= 50;
    rviz_publisher.publish(left_rear);


}
void rviz::move_right_rear(){


    x +=0.1;
    right_rear.header.stamp.sec = begin.toSec() + 60;
    right_rear.position.at(0) = x;
    right_rear.velocity.at(0)= 50;
    rviz_publisher.publish(right_rear);


}
void rviz::move_left_rear_b(){
    x -= 0.1;
    left_rear.header.stamp.sec = begin.toSec() + 60;
    left_rear.position.at(0) = x;
    left_rear.velocity.at(0)= 50;
    rviz_publisher.publish(left_rear);
}
void rviz::move_right_rear_b(){
    x-= 0.1;
    right_rear.header.stamp.sec = begin.toSec() + 60;
    right_rear.position.at(0) = x;
    right_rear.velocity.at(0)= 50;
    rviz_publisher.publish(right_rear);
}
void rviz::turn_right_pressed(){
    left_front.header.stamp.sec = begin.toSec() + 60;
    left_front.position.at(0)  = 1.0;
    left_front.velocity.at(0)  = 50;
    rviz_publisher.publish(left_front);
    right_front.header.stamp.sec = begin.toSec() + 60;
    right_front.position.at(0) = 1.0;
    right_front.velocity.at(0) = 50;
    rviz_publisher.publish(right_front);
}

void rviz::turn_left_pressed(){
    left_front.header.stamp.sec = begin.toSec() + 60;
    left_front.position.at(0)  = -1.0;
    left_front.velocity.at(0)  = 50;
    rviz_publisher.publish(left_front);
    right_front.header.stamp.sec = begin.toSec() + 60;
    right_front.position.at(0) = -1.0;
    right_front.velocity.at(0) = 50;
    rviz_publisher.publish(right_front);

}
void rviz::turn_right_released(){
    left_front.header.stamp.sec = begin.toSec() + 60;
    left_front.position.at(0)  = 0;
    left_front.velocity.at(0)  = 50;
    rviz_publisher.publish(left_front);
    right_front.header.stamp.sec = begin.toSec() + 60;
    right_front.position.at(0) = 0;
    right_front.velocity.at(0) = 50;
    rviz_publisher.publish(right_front);

}

void rviz::turn_left_released(){
    left_front.header.stamp.sec = begin.toSec() + 60;
    left_front.position.at(0)  = 0;
    left_front.velocity.at(0)  = 50;
    rviz_publisher.publish(left_front);
    right_front.header.stamp.sec = begin.toSec() + 60;
    right_front.position.at(0) = 0;
    right_front.velocity.at(0) = 50;
    rviz_publisher.publish(right_front);

}
