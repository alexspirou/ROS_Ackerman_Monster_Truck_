void loop() {

  auto_GUI();
  manual_GUI();
  stop_GUI();
  check_GUI();
  led_on_off();
  nh->spinOnce();
  delay(2);
}
