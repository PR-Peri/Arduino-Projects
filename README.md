# PRs_ArduinoProjects
Self-implemented projects from scratch and some basics


1) Ultrasonic Sensor Description

This module consists of two drums, one of which is a emitter that emits ultrasound and other is receiver which receives the reflected ultrasound from the object. The emitter drum emits ultrasound when we trigger the module using the trigPin by sending a 10 microseconds high pulse. As soon as the ultrasound is emitted through the emitter the module makes the echoPin high. Emitted ultrasound travels forward till it gets reflected by object and then travels backward. The reflected ultrasound is detected by the receiver. When the reflected ultrasound is received by the receiver, echoPin is made low. Now we have the time take by the ultrasound to reach the object and again reach the source which is also equal to the duration for which the echoPin was high. This time is stored in the microcontroller. Therefore travel time of ultrasound between just source to object is half the time take to travel source object source.

Tools : 
- arduino uno
- breadboard
- ultrasonic sensors 
- jumperwires

2) Arduino Temperature Control

The system starts and shows the temperature, if the temperature reaches 25 degrees, then the green led is activated and the room starts to cool until the temperature drops to 23 degrees, the air conditioner turns off (red led) until the temperature rises again. The temperature can be controlled as by making changes in the code

Tools :
- arduino uno
- dht22 temperature sensor
- jumper wires
- led
- resistor 10k o
- resistor 330 o
- dfrobot lcd button sheild
- breadboard

3) Displaying sensor

This project uses 2 potentiometers that are connected on a breadboard to an Arduino and LCD. The end result is that the LCD should indicate the values of both the potentiometers when they are adjusted

Tools :
- arduino uno
- LCD
- potentiometer
- jumper wires
- breadboard
- rm065 10k o 103 Trim pot potentiometer
- rm065 1k o 102 trim pot potentiomerter


4) Parking Sensor
Just a very basic project. *Get your libraries installed before running the codes or else it wont function*

Tools :
- arduino
- buzzzer
- jumper wires
- ultrasonic sensors

5) Line following robot (First implementation )
A simple line follower robot by using Arduino and very basic electronic components. It is a  fully autonomous robot using Arduino and IR sensors. It can follow a black line on white surface. 

tools :
- Acrylic sheet
- Arduino Uno
- IR sensor
- BO motor
- Wheels
- Caster wheel
- L293d IC
- PCB
- Flexible wire
- Battery
- Battery holder

6) Soil Moisture Sensor *(There's two part of the code, but one was an attempt to make explosion beneath the soil, so i wont be uploading that due to safety purpose.)*

*Project Requires Soldering depending on ur tools whether its already having solderied pins.*
With a little solder, a sensor attached to an Arduino, and code that you can import, or 'flash', to your microprocessor, you can create a device that will test the moisture of the soil of a potted plant and flash a light if it is too dry. In this tutorial I'll show you how to hook up the parts and write the code to make your Arduino's built-in LED light blink when the soil is too dry and the plant needs to be watered. You can easily customize the code to change the range that is considered 'dry' or 'watered', and you could extend this project to make more interesting things happen if the soil is dry (like send a text).


