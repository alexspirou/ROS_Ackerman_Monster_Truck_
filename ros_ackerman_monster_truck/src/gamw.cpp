#include "ros/ros.h"
#include "std_msgs/String.h"
#include "geometry_msgs/Twist.h"
#include <sstream>



int main(int argc, char **argv)
{

  ros::init(argc, argv, "talker");

  ros::NodeHandle n;


  ros::Publisher chatter_pub = n.advertise<std_msgs::String>("chatter", 1000);
  //Publisher for movement
  ros::Publisher twisted_pub = n.advertise<geometry_msgs::Twist>("cmd_vel", 1000);
  ros::Rate loop_rate(10);

  int count = 0;

  while (ros::ok())
  {


    std_msgs::String msg;
    geometry_msgs::Twist twist_msg;
    std::stringstream ss;

    twist_msg.linear.x = 30;

    ss << "aeeee " << count;
    msg.data = ss.str();


    chatter_pub.publish(msg);
    twisted_pub.publish(twist_msg);

    ros::spinOnce();
    loop_rate.sleep();

    ++count;
  }


  return 0;
}
