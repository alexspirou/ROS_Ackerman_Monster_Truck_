//--Publishers

ros::Publisher  optical_encoder_publisher("optical_encoder", &rpm_msg); 
ros::Publisher  ultrasonic_sensor_middle_publisher("ultrasonic_sensor_middle", &ultrasonic_sensor_middle); 
ros::Publisher  ultrasonic_sensor_left_publisher("ultrasonic_sensor_left", &ultrasonic_sensor_left); 
ros::Publisher  ultrasonic_sensor_right_publisher("ultrasonic_sensor_right", &ultrasonic_sensor_right); 


//--Subscribers

//Motor Suscriber
ros::Subscriber <geometry_msgs::Twist> motor("/cmd_vel", &callback_motors); // Subscribe from topic cmd_vel, twisted messages
//--Servo Subscriber
ros::Subscriber <std_msgs::UInt16 > servo("/servo", callback_servo); // Subscribe from topic cmd_vel, twisted messages
