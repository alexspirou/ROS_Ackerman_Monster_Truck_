//--Publishers
ros::Publisher  optical_encoder_publisher("optical_encoder", &rpm_msg); 
ros::Publisher  ultrasonic_sensors_publisher("ultrasonic_sensors", &ultrasonic_sensors); 


//--Subscribers
//Motor Suscriber
ros::Subscriber <geometry_msgs::Twist> motor("/cmd_vel", &callback_motors); // Subscribe from topic cmd_vel, twisted messages

//--Qt command Subscriber
ros::Subscriber <std_msgs::UInt16> qt_sub("/qt", &callback_qt);

//--Servo Subscriber
ros::Subscriber <std_msgs::UInt16> servo("/servo", &callback_servo); 
