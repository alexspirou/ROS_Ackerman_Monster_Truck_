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
  ros::Rate loop_rate(40);
  int counter =0;
int speed = 30;
  while (ros::ok())
  {


   if (counter %2){
        s1->turn_left();
        loop_rate.sleep();
   }
   else
   {
       s1->turn_right();
       loop_rate.sleep();
   }
   counter ++;
   ROS_INFO("counter = i%", counter);
   ros::spinOnce();

  }


  return 0;
}
