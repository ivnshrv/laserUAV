import serial
import rospy
from clover import srv
from std_srvs.srv import Trigger

rospy.init_node('flight')  # 'flight' is name of your ROS node

get_telemetry = rospy.ServiceProxy('get_telemetry', srv.GetTelemetry)
navigate = rospy.ServiceProxy('navigate', srv.Navigate)
navigate_global = rospy.ServiceProxy('navigate_global', srv.NavigateGlobal)
set_position = rospy.ServiceProxy('set_position', srv.SetPosition)
set_velocity = rospy.ServiceProxy('set_velocity', srv.SetVelocity)
set_attitude = rospy.ServiceProxy('set_attitude', srv.SetAttitude)
set_rates = rospy.ServiceProxy('set_rates', srv.SetRates)
land = rospy.ServiceProxy('land', Trigger)

navigate(z=0.7, frame_id='body', auto_arm=True)
rospy.sleep(3)
line = ''
while True:
    if __name__ == '__main__':
        ser = serial.Serial('/dev/ttyACM3', 9600, timeout=1)
        ser.reset_input_buffer()
        while True:
            if ser.in_waiting > 0:
                line = ser.readline().decode('utf-8').rstrip()
#                print(line)



                if line == 'u':
                    print(line)
                    navigate(x=0, y=0, z=0.2, frame_id='body')
                    rospy.sleep(1)
                elif line == 'd':
                    print(line)
                    navigate(x=0, y=0, z=-0.2, frame_id='body')
                    rospy.sleep(1)
                elif line == 'l':
                    print(line)
                    navigate(x=-0.2, y=0, z=0, speed=1, frame_id='body')
                    rospy.sleep(1)
                elif line == 'r':
                    print(line)
                    navigate(x=0.2, y=0, z=0, speed=1, frame_id='body')
                    rospy.sleep(1)
                elif line == 'f':
                    print(line)
                    navigate(x=0, y=0.2, z=0, speed=1, frame_id='body')
                    rospy.sleep(1)
                elif line == 'b':
                    print(line)
                    navigate(x=0, y=-0.2, z=0, speed=1, frame_id='body')
                    rospy.sleep(1)
