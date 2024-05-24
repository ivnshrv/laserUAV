# laserUAV
A solution for controlling UAV by means of sending laser signals. My individual project in 10th grade.

![Arduino](https://img.shields.io/badge/-Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![Raspberry Pi](https://img.shields.io/badge/-RaspberryPi-C51A4A?style=for-the-badge&logo=Raspberry-Pi)
![ROS](https://img.shields.io/badge/ros-%230A0FF9.svg?style=for-the-badge&logo=ros&logoColor=white)

# Components
### receiver - code running on the receiver. The receiver connects to Raspberry PI via GPIO and transmits commands from base.
### rpi - code running on the Raspberry PI controller on drone. RPI sends commands to the flight controller (PixRacer in this case)
### base - code running on the RC. This code sends laser impulses.

# Relevance of the project
The development of software for UAV control using laser communication is pertinent as the utilization of UAVs becomes increasingly prevalent. My project addresses the constraints of radio communication and offers a more stable and reliable connection through laser communication. Laser communication provides a wide bandwidth, low logistical burden, low probability of detection, and does not require significant investments. 
The theoretical significance of the project lies in the development of an innovative approach to UAV management, while the practical significance lies in enhancing the efficiency of UAV systems. My development opens up new possibilities for the utilization of UAVs in various industries and contributes to the advancement of the unmanned systems industry.

# Conclusion
During the course of the project, a product enabling the control of UAVs through laser communication was developed. 
This software can be utilized on virtually any UAV and does not necessitate substantial investments for operation. Various methods of UAV management were analyzed and scrutinized throughout the project, leading to the identification of the most pragmatic approach.
