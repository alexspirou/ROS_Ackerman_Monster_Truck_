#ifndef MOVE_H
#define MOVE_H
#include "ros/ros.h"
#include "Motor.h"

class Move
{

public:
Move();
~Move();
void navigation(int speed)
{
   motor->move_back(speed);
}

private:
Motor* motor = new Motor();




};
#endif
