#include "OpticalEncoder.h"
#include "../movement/Motor.h"
std_msgs::Int32 optical_encoder;
void oe_callback(const std_msgs::Int32& oe_msg )
{
    int speed = 30;
//    ROS_INFO("[%i]Optical Encoder", oe_msg.data);
    optical_encoder = oe_msg;


}
OpticalEncoder::OpticalEncoder(){
    m_sub->subscribe(m_subscriber, "optical_encoder", m_nh, oe_callback);
}



void OpticalEncoder::speed_limiter(int& speed_limit){
    speed_limit = 0;
}
