#include "ros.h"
#include <geometry_msgs/Twist.h>
#include <std_msgs/Int32.h>
#include <std_msgs/UInt16.h>
#include <sensor_msgs/Range.h>
#include <Servo.h>
#include <HardwareSerial.h>
#include <geometry_msgs/Vector3.h>
#include "TimerOne.h"



//--ROS
ros::NodeHandle* nh = new ros::NodeHandle();

//--Variables for each message
///
geometry_msgs::Vector3 ultrasonic_sensors; //ultrasonic_sensors.x ->middle
                                           //ultrasonic_sensors.y ->right
                                           //ultrasonic_sensors.z ->left
std_msgs::Int32 rpm_msg;

int servo_command = 0;

//--Booleans
bool one = true;
//Ultrasonic Sensors
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement
//--U1
#define u1_echo A2
#define u1_trig A3
//--U2
#define u2_echo A0
#define u2_trig A1
//--U3 
#define u3_echo 6
#define u3_trig 7
//--Servo
Servo myservo;  // create servo object to control a servo
int servo_pos{0};
//--Motor Driver
const int en_a =5;
const int in_1 = 4;
const int in_2 =12;
int sp = 15;

//--Optical Encoder

//test
#define enc  2

unsigned int counter1 = 0;
float des_cm = 1.5;
unsigned int safety_speed = 50;
float cm = 0;  
float diskslots = 20.00;
void encoder_counter();
float encoder_fun();
void balance_speed(float current_cm, float des_cm, int& pwm_);

//--Function prototyping

//--ROS Callbacks and functions
void callback_motors(const geometry_msgs::Twist& cmd_vel);
void callback_servo(const std_msgs::UInt16& servo_msg);
void rpm_publisher();
void ultrasonic_sensors_publisher_call();

//--Ultrasonic
int u1();
int u2();
int u3();
//--Motors
void move_for(int& sp);
void stop_stop();
void move_backwards(int& sp);
void check_motors();
//--Servo
void turn_right();
void turn_left();
void check_servo();
//--OE
void update_encoder();
void calculate_rpm();
//Navigation
void auto_navigation(int& sp);
void manual_navigation();
