#include "Move.h"

Move::Move()
{
    motor = new Motor();
    servo = new Servo();
    oe = new OpticalEncoder();
    static std_msgs::Int32 rpm;

}

void Move::navigation(){
    rpm_limit(10);
    motor->move_front(speed);

}
void Move::rpm_limit(int n){

    while(rpm.data < n){
        speed ++;
        motor->move_front(speed);
        ROS_INFO("RPM : %d", rpm.data);
        break;

    }
    if(speed > safe_speed){
        speed = safe_speed;
    }
    while(rpm.data > n){
        speed --;
        motor->move_front(speed);
        ROS_INFO("RPM : %d", rpm.data);
        break;

    }
    if(speed > safe_speed){
        speed = safe_speed;
    }
    ROS_INFO("SPEED : %d", speed);
}
