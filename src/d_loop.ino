void loop() {
 
 
 


  //--Subscirbers
  move_for(sp);
  move_backwards(sp);
  stop_stop(sp);
  rpm_publisher();  
   //--Publishers
  ultrasonic_sensor_middle_publisher_call();
  ultrasonic_sensor_left_publisher_call();
  ultrasonic_sensor_right_publisher_call();


  nh.spinOnce();
  delay(50);
}
