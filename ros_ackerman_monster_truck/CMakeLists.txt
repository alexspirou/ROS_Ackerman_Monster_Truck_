cmake_minimum_required(VERSION 3.0.2)
project(ros_ackerman_monster_truck)

## Find catkin and any catkin packages
find_package(catkin REQUIRED COMPONENTS roscpp rospy std_msgs)



## Declare a catkin package
catkin_package()

## Build talker and listener
include_directories(include ${catkin_INCLUDE_DIRS})
include_directories(
include ${catkin_INCLUDE_DIRS} 
movement
obstacle_avoidance
publishers
speed_limiter
)


add_executable(Monster_Truck src/main.cpp 
src/movement/Move.cpp src/movement/Move.h
src/movement/Motor.cpp src/movement/Motor.h
src/movement/Servo.cpp src/movement/Servo.h
src/obstacle_avoidance/UltrasonicSensors.h
src/publishers_subscribers/Publishers.h src/publishers_subscribers/Subscribers.h
src/speed_limiter/OpticalEncoder.cpp src/speed_limiter/OpticalEncoder.h

)

target_link_libraries(Monster_Truck ${catkin_LIBRARIES})



