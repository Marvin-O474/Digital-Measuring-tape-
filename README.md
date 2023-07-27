# Digital Measuring Tape 
This repo features the code and schematic and of the prototype of an electronic tape measure. The components that where used in this project are:
* A 16x2 LCD display 
* 1.1k ohms resistor (R1)
* 3.9k ohms resistor (R2)
* 240 ohms resistor (R3)
* An ultrasonic sensor 
* An Arduino Uno 
* A Breadboard
* Jumper wires

The digital tape measure workes by sending ultrasonic pulses through the transmitter of the sensor. When these pulses hit an object they are reflected back to the reciever of the sensor. The time it takes to recieve this echo is measured and used to calculate the distance form the object infornt of the sensor. The distance is then converted to centimeters and meters, and dispalyed on the LCD screen.This is repeated every 200ms. 