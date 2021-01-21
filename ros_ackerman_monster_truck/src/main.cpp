#include "ros/ros.h"
#include "std_msgs/String.h"
#include "geometry_msgs/Twist.h"
#include <sstream>
#include "publishers_subscribers/Publishers.h"
#include "movement/Motor.h"
#include <string>
#include "obstacle_avoidance/UltrasonicSensors.h"
#include "movement/Servo.h"
#include "speed_limiter/OpticalEncoder.h"
#include <chrono>
#include <thread>
using namespace std::this_thread;     // sleep_for, sleep_until
using namespace std::chrono_literals;
using std::chrono::system_clock;
int main(int argc, char **argv)
{

  ros::init(argc, argv, "s");
  UltrasonicSensors* u1_ = new UltrasonicSensors();
  static Motor* m1 = new Motor();
  Servo* s1 = new Servo();
  OpticalEncoder* o1 = new OpticalEncoder();
    ros::Rate loop_rate(2000);
  int speed = 50;
  double safe = 20;
  while (ros::ok())
  {




   if(ultrasonic_msg.y > safe){

       m1->move_front(speed);
   }
   else{
       speed = 0;
       m1->stop(speed);

   }
   sleep_for(0.5s);
   sleep_until(system_clock::now() + 0.2s);
   ros::spinOnce();
  }

  return 0;
    }

