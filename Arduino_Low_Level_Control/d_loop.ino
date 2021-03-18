void loop() {

  auto_GUI();
  manual_GUI();
  stop_GUI();
  check_GUI();
  nh->spinOnce();
  delay(5);

}
