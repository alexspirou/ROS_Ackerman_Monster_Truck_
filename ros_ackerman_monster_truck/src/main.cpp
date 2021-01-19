#include "ros/ros.h"
#include "std_msgs/String.h"
#include "geometry_msgs/Twist.h"
#include <sstream>
#include "publishers_subscribers/Publishers.h"
#include "movement/Motor.h"
#include <string>
#include "obstacle_avoidance/UltrasonicSensors.h"
#include <std_msgs/Int32.h>
#include "movement/Servo.h"

int main(int argc, char **argv)
{

  ros::init(argc, argv, "s");
  UltrasonicSensors* u1_ = new UltrasonicSensors();
  Motor* m1 = new Motor();
  Servo* s1 = new Servo();
  ros::Rate loop_rate(1000);
  int counter =0;
int speed = 0;
int speed2 = 20;
  while (ros::ok())
  {


    u1_->ultrasonic_sub();
    m1->move_front(speed);
    loop_rate.sleep();
    m1->move_front(speed2);
    loop_rate.sleep();
   ros::spinOnce();

  }

  return 0;
}
