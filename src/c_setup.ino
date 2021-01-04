void setup() {

  //Ultrasonic Sensors Setup
  pinMode(u1_trig, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(u1_echo, INPUT); // Sets the echoPin as an INPUT
  pinMode(u2_trig, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(u2_echo, INPUT); // Sets the echoPin as an INPUT
  pinMode(u3_trig, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(u3_echo, INPUT); // Sets the echoPin as an INPUT
  //Servo Setup
  myservo.attach(A4);
  //Motor Drivers Setup
  pinMode(en_a, OUTPUT);
  pinMode(in_1, OUTPUT);
  pinMode(in_2, OUTPUT);
  //Optical Encoder
  pinMode(enc, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(enc), update_encoder, RISING);

  nh.getHardware()->setBaud(57600);
  //  Serial.println("Serial Begin");
  nh.initNode();
   //ROS--Publishers-Subscribers
  nh.subscribe(motor);
  nh.subscribe(servo);
  nh.advertise(optical_encoder_publisher);
  nh.advertise(ultrasonic_sensor_middle_publisher);
  nh.advertise(ultrasonic_sensor_left_publisher);
  nh.advertise(ultrasonic_sensor_right_publisher);

  
}
