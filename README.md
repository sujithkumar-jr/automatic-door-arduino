# Automatic Door System using Arduino

## Project Description
An automatic door system using an Arduino UNO, HC-SR04 ultrasonic
sensor, and MG90S servo motor.

## Components Used
- Arduino UNO
- HC-SR04 Ultrasonic Sensor
- MG90S Servo Motor
- Green LED
- Red LED
- Buzzer
- Breadboard
- Jumper Wires

## Pin Connections

| Component | Arduino Pin |
|---|---|
| HC-SR04 TRIG | D9 |
| HC-SR04 ECHO | D8 |
| MG90S Signal | D7 |
| Buzzer | D6 |
| Green LED | D4 |
| Red LED | D5 |

## Working
The HC-SR04 ultrasonic sensor measures the distance of an object.

When an object is detected within 15 cm:
- The servo rotates to 90°
- Green LED turns ON
- Red LED turns OFF
- Buzzer gives an alert

When no object is detected:
- The servo returns to 0°
- Red LED turns ON
- Green LED turns OFF
- Buzzer remains OFF

## Software
Arduino IDE

## Microcontroller
Arduino UNO

## Author
Sujith Kumar jr
## Circuit Diagram

![Circuit Diagram](circuit_diagram.png)

## Project Photo

![Project Photo](project_photo.jpg)
