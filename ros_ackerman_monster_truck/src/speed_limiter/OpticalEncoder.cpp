#include "OpticalEncoder.h"


void OpticalEncoder::oe_callback(const std_msgs::Int32& oe_msg )
{
    ROS_INFO("[%i]efefefe" , oe_msg.data );
//    set_msg(oe_msg);
//    get_msg();
}
int OpticalEncoder::optical_encoder_sub(const char* topic_name)
{
    m_sub->subscribe(m_subscriber, topic_name, m_nh, oe_callback);
}
void OpticalEncoder::speed_limiter(int& speed_limit)
{
    speed_limit = 0;
}
