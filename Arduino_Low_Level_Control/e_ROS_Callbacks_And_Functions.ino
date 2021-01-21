//--Callback function for motors
void callback_motors(const geometry_msgs::Twist& cmd_vel)
{
  sp = cmd_vel.linear.x; 
}

void callback_servo  (const std_msgs::UInt16& servo_msg)
{
  servo_command = servo_msg.data;
}
//--Publisher for rpm
void rpm_publisher()
{
  rpm_msg.data = calculate_rpm();
  optical_encoder_publisher.publish(&rpm_msg);
}

//--Publisher for U1
void ultrasonic_sensors_publisher_call()
{
  ultrasonic_sensors.x = u1();
  ultrasonic_sensors.y = u2();
  ultrasonic_sensors.z = u3();
  ultrasonic_sensors_publisher.publish(&ultrasonic_sensors);
}
