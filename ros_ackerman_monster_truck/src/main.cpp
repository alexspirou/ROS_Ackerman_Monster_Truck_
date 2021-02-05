#include "ros/ros.h"
#include "movement/Move.h"
#include "speed_limiter/OpticalEncoder.h"
//#include <chrono>
//#include <thread>
////using namespace std::this_thread;     // sleep_for, sleep_until
////using namespace std::chrono_literals;
////using std::chrono::system_clock;

int main(int argc, char **argv)
{

  ros::init(argc, argv, "s");

  Move* movement = new Move ();
  while (ros::ok())
  {
       movement->navigation();

       movement->delay(40);

       ros::spinOnce();
  }
  delete movement;
  return 0;
}

