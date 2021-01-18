void loop() {
 
 
 


  //--Subscirbers
  move_for(sp);
  move_backwards(sp);
  stop_stop(sp);
  turn_right();
  turn_left();
  //--Publishers
  rpm_publisher();
  ultrasonic_sensor_middle_publisher_call();
  ultrasonic_sensor_left_publisher_call();
  ultrasonic_sensor_right_publisher_call();


  nh.spinOnce();
  delay(50);
}
