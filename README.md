Soil Moisture Monitoring and Control System
Overview
This project is a real-time soil moisture monitoring and control system using Arduino. It reads moisture levels from a sensor, displays the data via the serial monitor, and automatically controls connected devices (e.g., a water pump) based on predefined moisture thresholds. Additionally, it allows manual control through serial commands.

Features
✅ Real-time Soil Moisture Detection: Reads data from the moisture sensor and converts it to a percentage.
✅ Automated Control: Turns the pump ON or OFF based on moisture levels (<30% = ON, >90% = OFF).
✅ Manual Override via Serial Communication: Users can send commands through the serial monitor to manually control devices.
✅ Optimized for Efficiency: Uses simple calculations and delay mechanisms for stable and reliable operation.

Components Required
Arduino Board (Uno/Nano/etc.)
Soil Moisture Sensor
Jumper Wires
Water Pump (Optional)
Relay Module (if controlling high-power devices)
Wiring
Arduino Pin	Component
A0	Soil Moisture Sensor (Analog Output)
5	Output Device (e.g., Pump, Relay)
7	Output Device (e.g., LED, Buzzer)
TX (1)	Serial Communication
RX (0)	Serial Communication
Serial Commands for Manual Control
You can send the following commands via the Serial Monitor:

Command	Action
1	Turn ON device connected to pin 5
0	Turn OFF device connected to pin 5
3	Turn ON device connected to pin 7
4	Turn OFF device connected to pin 7
Code Explanation
Reads analog data from the moisture sensor.
Converts the sensor value into a percentage.
If moisture drops below 30%, turns the pump ON.
If moisture exceeds 90%, turns the pump OFF.
Listens for manual commands over serial communication to toggle devices.
Uses a small delay for stable readings and device control.
Installation & Usage
Upload the Code to the Arduino using the Arduino IDE.
Open the Serial Monitor (9600 baud rate).
Observe real-time moisture readings and manually control devices if needed.
