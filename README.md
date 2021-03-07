## ROS_Ackerman_Monster_Truck

ROS_Ackerman_Monster_Truck is a robot car with an arduino and Raspberry Pi 4. Arduino is responssible for the control of motors and sensors. Raspberry Pi run Robot Operating System (ROS)
and control robot with a GUI.

## ROS_Ackerman_Monster_Truck_UI
ROS_Ackerman_Monster_Truck_UI is a GUI programmed with Qt framework. Is a usefull GUI for any ROS project that allows to you to control your Robot and reading data from sensors.


![](/Resources/ui.png)


## Installation

# Create a workspace folder
```bash
mkdir -p <catkin_ws>/src
cd <catkin_ws>/src
```
# Clone the repo
```bash
https://github.com/alexspirou/ROS_Ackerman_Monster_Truck_.git
```
# Build project
```bash
cd catkin_ws
catkin_make

To control the turtlesim you need to change the rostopic to turtlesim's cmd_vel topic.
Go to source folder in ROS_Ackerman_Monster_Truck_/Monster_Truck_UI/src/ROS_src/_ros.cpp file change the line of code

from :
```bash
pwm_pub = n->advertise<geometry_msgs::Twist>("cmd_vel", 200);
```
to :
```bash
pwm_pub = n->advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 200);
```
and build:
```bash
cd catkin_ws
catkin_make
``````
## Run
Start a rosmaster:
```bash
roscore
```
Run GUI
```bash
rosrun ROS_Ackerman_Monster_Truck_UI ROS_Ackerman_Monster_Truck_UI 
```
Start turtlesim_node to check it:

```bash
rosrun turtlesim turtlesim_node
```



