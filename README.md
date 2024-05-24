# laserUAV
A solution for controlling UAV by means of sending laser signals. My individual project in 10th grade.

### receiver - code running on the receiver. The receiver connects to Raspberry PI via GPIO and transmits commands from base.
### rpi - code running on the Raspberry PI controller on drone. RPI sends commands to the flight controller (PixRacer in this case)
### base - code running on the RC. This code send laser impulses.
