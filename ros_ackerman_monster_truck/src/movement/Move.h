#ifndef MOVE_H
#define MOVE_H
#include "ros/ros.h"
#include "Motor.h"
#include "Servo.h"
#include "../speed_limiter/OpticalEncoder.h"

class Move
{

public:
Move();
~Move(){delete motor; delete servo;}
void navigation();
void rpm_limit(int n);

private:
Motor* motor;
Servo* servo;
OpticalEncoder* oe;
int speed{0};
int safe_speed{35};


};
#endif
