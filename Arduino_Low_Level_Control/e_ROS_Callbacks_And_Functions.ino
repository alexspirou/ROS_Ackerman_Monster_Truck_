//--Callback function for motors
void callback_motors(const geometry_msgs::Twist& cmd_vel)
{
  sp = cmd_vel.linear.x; 
}

void callback_servo(const std_msgs::UInt16& servo_msg)
{
  myservo.write(servo_msg.data);
}
//--Publisher for rpm
void rpm_publisher()
{
  rpm_msg.data = calculate_rpm();
  optical_encoder_publisher.publish(&rpm_msg);
}

//--Publisher for U1
void ultrasonic_sensor_middle_publisher_call()
{
   ultrasonic_sensor_middle.data = u1();
  ultrasonic_sensor_middle_publisher.publish(&ultrasonic_sensor_middle);
}
//--Publisher for U2
void ultrasonic_sensor_right_publisher_call()
{
  ultrasonic_sensor_right.data = u2();
  ultrasonic_sensor_right_publisher.publish(&ultrasonic_sensor_right);
}
//--Publisher for U3
void ultrasonic_sensor_left_publisher_call()
{
  
  ultrasonic_sensor_left.data = u3();
  ultrasonic_sensor_left_publisher.publish(&ultrasonic_sensor_left);
}
