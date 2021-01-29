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
  int speed = 30;
  double safe = 40;
  while (ros::ok())
  {
    //Middle
   if(ultrasonic_msg.x > safe) {
     speed = 30;
    m1->move_front(speed);
    s1->turn_left();
   }
   else if(ultrasonic_msg.x < safe){
        m1->stop(0);
        //If right sensor has no obstacle
        if(ultrasonic_msg.y > ultrasonic_msg.z){
            m1->stop(speed);
            m1->move_back(speed);
            s1->turn_right();
            m1->move_front(speed);
            }
        else if (ultrasonic_msg.y < ultrasonic_msg.z){
            m1->stop(speed);
            m1->move_back(speed);
            s1->turn_left();
            m1->move_front(speed);
        }
   }



//   sleep_for(0.1s);
   sleep_until(system_clock::now() + 0.1s);
   ros::spinOnce();

}
  return 0;
    }

