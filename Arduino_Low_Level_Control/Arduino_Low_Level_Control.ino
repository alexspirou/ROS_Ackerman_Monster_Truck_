#include "ros.h"
#include <geometry_msgs/Twist.h>
#include <std_msgs/Int32.h>
#include <std_msgs/UInt16.h>
#include <sensor_msgs/Range.h>
#include <Servo.h>
#include <HardwareSerial.h>





//--ROS
ros::NodeHandle* nh = new ros::NodeHandle();

//--Variables for each message
///
std_msgs::Int32 ultrasonic_sensor_middle;
std_msgs::Int32 ultrasonic_sensor_left;
std_msgs::Int32 ultrasonic_sensor_right;
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
int sp = 0;
//--Optical Encoder

#define enc_count 374
#define enc  2

volatile long encoder_value = 0;
int interval = 1000;
long previus_millis = 0;
long current_millis = 0;
int rpm = 0;


//--Function prototyping

//--ROS Callbacks and functions
void callback_motors(const geometry_msgs::Twist& cmd_vel);
void callback_servo(const std_msgs::UInt16& servo_msg);
void rpm_publisher();
void ultrasonic_sensor_middle_publisher_call();
void ultrasonic_sensor_right_publisher_call();
void ultrasonic_sensor_left_publisher_call();

//--Ultrasonic
int u1();
int u2();
int u3();
//--Motors
void move_for(int &sp);
void stop_stop(int &sp);
void move_backwards(int &sp);
//--Servo
void turn_right();
void turn_left();
//--OE
void update_encoder();
int calculate_rpm();
