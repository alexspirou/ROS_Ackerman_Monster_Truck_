void loop() {
  //Middle Sensor
   // Clears the trigPin condition
  digitalWrite(u1_trig, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(u1_trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(u1_trig, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(u1_echo, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
   //Displays the distance on the Serial Monitor
  Serial.print("U1: Distance: ");
  Serial.print(distance);
  Serial.println(" cm/n");
//  delay(1);
}
