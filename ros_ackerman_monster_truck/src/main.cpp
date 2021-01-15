#include "ros/ros.h"
#include "std_msgs/String.h"
#include "geometry_msgs/Twist.h"
#include <sstream>
#include "publishers_subscribers/Publishers.h"
#include "movement/Motor.h"
#include <string>
#include "obstacle_avoidance/UltrasonicSensors.h"
#include <std_msgs/Int32.h>

int main(int argc, char **argv)
{

  ros::init(argc, argv, "s");
  UltrasonicSensors* u1_ = new UltrasonicSensors();
  Motor* m1 = new Motor();
  ros::Rate loop_rate(20);
int speed = 30;
  while (ros::ok())
  {



   if (u1_->ultrasonic() < 25)
   {
       m1->move_front(speed);
   }

   ros::spinOnce();

  }


  return 0;
}
