#include "Move.h"

Move::Move()
{
    motor = new Motor();
    servo = new Servo();
    oe = new OpticalEncoder();
    static std_msgs::Int32 rpm;
    rpm_flag = false;
}

void Move::navigation(){
//    rpm_equal = rpm_less = rpm_greater = false;
    rpm_limit();
    motor->move_front(speed);
}
void Move::rpm_limit(){
    while(speed < safe_speed){
        if(rpm.data < n){

            speed ++;
            ROS_INFO("RPM: %d < N :%d ---Speed : %d", rpm.data, n, speed);
            motor->move_front(speed);

            }

        if(rpm.data > n ){

           speed  --;
            ROS_INFO("RPM: %d > N :%d ---Speed : %d", rpm.data, n, speed);
            motor->move_front(speed);

            }


        if((rpm.data == n || rpm.data == n+2)){
            delay(5);
            ROS_INFO("RPM: %d == N :%d ---Speed : %d", rpm.data, n, speed);
            motor->move_front(speed);

        }
        break;
    }
}

//void Move::desirable_rpm(){

//    while(rpm_flag){
//        delay(100);
//        ROS_INFO("RPM: %d == N :%d ---Speed : %d", rpm.data, n, speed);
//        if(rpm.data > n || rpm.data < n){
//           break;
//       }
//        rpm_flag = false;

//    }
//}
