#include "Move.h"

Move::Move()
{
    motor = new Motor();
    servo = new Servo();
    oe = new OpticalEncoder();
    static std_msgs::Int32 rpm;
    rpm_equal = rpm_less = rpm_greater = false;
}

void Move::navigation(){
    rpm_equal = rpm_less = rpm_greater = false;
    rpm_limit(14);
    motor->move_front(speed);
}
void Move::rpm_limit(int n){

    while(rpm.data < n && ! rpm_greater && !rpm_equal){
        delay(1);
        rpm_less = true;
        speed ++;
        if(speed > safe_speed)
            speed = safe_speed/2;
        ROS_INFO("RPM: %d < N :%d ---Speed : %d", rpm.data, n, speed);

        break;
    }

    while(rpm.data > n && !rpm_less && !rpm_equal){
        delay(1);
        speed  -= 1;
        rpm_greater = true;
        if (speed < safe_speed/2){
            rpm_greater = false;
            rpm_less =true;
            break;
        }
        ROS_INFO("RPM: %d > N :%d ---Speed : %d", rpm.data, n, speed);
    }
    while(rpm.data ==n && !rpm_greater && !rpm_less){
        ROS_INFO("RPM: %d == N :%d ---Speed : %d", rpm.data, n, speed);
        rpm_equal = true;
        break;
    }
}
