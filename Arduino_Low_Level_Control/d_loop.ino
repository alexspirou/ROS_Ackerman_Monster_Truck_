void loop() {

  auto_GUI();
  manual_GUI();
  stop_GUI();
  nh->spinOnce();
  delay(10);

}
