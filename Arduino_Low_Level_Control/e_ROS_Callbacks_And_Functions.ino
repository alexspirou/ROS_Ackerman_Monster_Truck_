//--Callback function for motors
void callback_led(const std_msgs::UInt16& led_msg_f)
{
  led_msg = led_msg_f.data;
}

void callback_motors(const geometry_msgs::Twist& cmd_vel)
{
  sp = cmd_vel.linear.x; 
}
void callback_qt(const std_msgs::UInt16& qt_msg_f)
{
  qt_msg = qt_msg_f.data;
}
void callback_servo  (const std_msgs::UInt16& servo_msg)
{
  servo_command = servo_msg.data;
}
//--Publisher for rpm
void rpm_publisher()
{
  rpm_msg.data = int (calculate_rpm());
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
