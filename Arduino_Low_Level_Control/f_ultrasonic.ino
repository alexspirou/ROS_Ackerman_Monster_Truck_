int u1(){
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
//Serial.print("U1: Distance: ");Serial.print(distance);Serial.println(" cm/n");
  ultrasonic_sensors.x = distance;
  ultrasonic_sensors_publisher.publish(&ultrasonic_sensors);
  return distance;
  }
int u2(){

  //Right Sensor
   // Clears the trigPin condition
  digitalWrite(u2_trig, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(u2_trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(u2_trig, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(u2_echo, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
//   Displays the distance on the Serial Monitor
// Serial.print("U2: Distance: ");Serial.print(distance);Serial.println(" cm");
  ultrasonic_sensors.y = distance;
  ultrasonic_sensors_publisher.publish(&ultrasonic_sensors);
  return distance;
  }
int u3(){
  //Left Sensor
   // Clears the trigPin condition
  digitalWrite(u3_trig, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(u3_trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(u3_trig, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(u3_echo, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
//Displays the distance on the Serial Monitor
//Serial.print("U3 Distance: ");Serial.print(distance);Serial.println(" cm/n");
  ultrasonic_sensors.z = distance;
  ultrasonic_sensors_publisher.publish(&ultrasonic_sensors);
  return distance;
  }      
