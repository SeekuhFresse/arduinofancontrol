import serial
import os
import time

# Define the serial port and baud rate
ser = serial.Serial('/dev/ttyUSB0', 9600)

# Define the delay between readings
delay = 1

while True:
  # Get the CPU temperature as a float
  temp = os.popen('vcgencmd measure_temp').readline()
  temp = float(temp.replace('temp=', '').replace("'C\n", ''))

  # Send the temperature to the serial port
  ser.write(str(temp))

  # Wait for the delay
  time.sleep(delay)
