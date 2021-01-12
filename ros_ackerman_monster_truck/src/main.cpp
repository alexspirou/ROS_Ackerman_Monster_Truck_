#include "ros/ros.h"
#include "std_msgs/String.h"
#include "geometry_msgs/Twist.h"
#include <sstream>
#include "publishers_subscribers/Publishers.h"
#include "movement/Motor.h"
#include <string>
#include "obstacle_avoidance/UltrasonicSensors.h"
int u1_callback()
{
    int i = 0;
    return i;

}
int main(int argc, char **argv)
{


  ros::init(argc, argv, "Monster_Truck");
  ros::Rate loop_rate(20);
  UltrasonicSensors* u1_ = new UltrasonicSensors();



  while (ros::ok())
  {
   const char* topic_name = "ultrasonic_sensor_middle";

   loop_rate.sleep();
   u1_->ultrasonic(topic_name);
   loop_rate.sleep();
   ros::spinOnce();

  }


  return 0;
}
