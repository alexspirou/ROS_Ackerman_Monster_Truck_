## ROS_Ackerman_Monster_Truck

ROS_Ackerman_Monster_Truck is a robot car with an arduino and a Raspberry Pi 4. Arduino is responssible for the control of motors and sensors. Raspberry Pi runs Robot Operating System (ROS) and controls robot with a GUI.

## ROS_Ackerman_Monster_Truck_UI
ROS_Ackerman_Monster_Truck_UI is a Graphical User Interface programmed with Qt framework. It's a useful GUI for any ROS project that allows you to control your Robot and reading data from sensors.


![](/Resources/ui.png)


## Installation
First you need to install Qt ROS plugin. 
From:
https://ros-qtc-plugin.readthedocs.io/en/latest/_source/How-to-Install-Users.html

Go to:
Installation Procedure for Ubuntu 18.04
Download Installer:
    --->Bionic Online Installer (Recommended)
When the download completes it needs to allowed as executable.
 -Rigt click
 -Properties
 -Permissions
 -Allow executing file as program
 -Double click and install Qt 
# Create a workspace folder
```bash
mkdir catkin_ws2
cd catkin_ws2
mkdir src
cd src

```
# Clone the repo
```bash
git clone https://github.com/alexspirou/ROS_Ackerman_Monster_Truck_.git
```
# Build project
```bash
cd ..
catkin_make
```
# Control Turtlesim
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
catkin_make
``````
## Run
Start a rosmaster:
```bash
roscore
```
Run GUI
```bash
rosrun Monster_Truck_UI Monster_Truck_UI 
```
Start turtlesim_node:

```bash
rosrun turtlesim turtlesim_node
```



