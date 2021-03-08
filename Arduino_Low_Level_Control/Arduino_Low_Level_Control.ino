#include "ros.h"
#include <std_msgs/String.h>
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
int  qt_msg = 0;
int servo_command = 0;
int counter = 0;
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
int servo_pos = 0;
//--Motor Driver
const int en_a = 5;
const int in_1 = 4;
const int in_2 = 12;
//*******************//
int sp = 0;
//*******************//

//--Optical Encoder

#define enc_count 200
#define enc  2
volatile long encoder_value = 0;
int interval = 1000;
long previus_millis = 0;
long current_millis = 0;
int rpm = 0;
float cm = 0;

//Speed limiter

float des_cm = 0.15;
unsigned int safety_speed = 50;
void balance_speed(float current_cm, float des_cm, int& pwm_);

//--Function prototyping

//--ROS Callbacks and functions
void callback_motors(const geometry_msgs::Twist& cmd_vel);
void callback_servo(const std_msgs::UInt16& servo_msg);
void callback_qt(const std_msgs::UInt16& qt_msg_f);
void rpm_publisher();
void ultrasonic_sensors_publisher_call();

//--Ultrasonic
int u1();
int u2();
int u3();

//--Motors
void move_for(int sp);
void stop_stop();
void move_backwards(int sp);
void check_motors();

//--Servo
void turn_right();
void turn_left();
void manual_turn_right();
void manual_turn_left();
void check_servo();

//--OE
void update_encoder();
float calculate_rpm();

//--Navigation
void auto_navigation(int& sp);

//--GUI
void auto_GUI();
void manual_GUI();
void stop_GUI();
