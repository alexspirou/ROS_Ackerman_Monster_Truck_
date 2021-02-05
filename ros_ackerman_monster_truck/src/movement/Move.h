#ifndef MOVE_H
#define MOVE_H
#include "ros/ros.h"
#include "Motor.h"
#include "Servo.h"
#include "../speed_limiter/OpticalEncoder.h"
#include <chrono>
#include <thread>
using namespace std::this_thread;     // sleep_for, sleep_until
using namespace std::chrono_literals;
using std::chrono::system_clock;

class Move
{
public:
Move();
~Move(){delete motor; delete servo;}
void delay(double mill_sec){ sleep_until(system_clock::now() + mill_sec*0.001s);
}
void navigation();
void rpm_limit();
void desirable_rpm();


private:
Motor* motor;
Servo* servo;
OpticalEncoder* oe;
int speed{0};
int safe_speed{35};
bool rpm_flag;
int n = 14;
int current_speed{0};

};
#endif
