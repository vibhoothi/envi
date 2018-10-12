# Introduction 
The purpose behind the project is to provide effective navigation for visually impaired people with help of embedded systems which could potentially replace cane sticks for blind people with this project.The project mainly uses two scientific principles Sonar and Digital Logic.
We all know the difficulty of walking in streets this project aims to cut the pain of walking in street mainly for people with visually impaired.This project consists of two main components one with haptic feedback and other with voice feedback which is made from Raspberry Pi and the classical haptic feedback inside shoes of the person which is implemented using Arduino Uno R3.
We have also made much more cost effective by using Atmega8 Microcontroller instead of Arduino so we will have much more reduced product and will consume less space.


## The Team
* Vibhoothi
* Anirudh Mohan T P
* Mayoogh Girish


## Componenets


| SL No        | Name           | Nos  |
| ------------- |:-------------:| -----:|
| 1     | Raspberry Pi               |   x1 |
| 2     | Resistor 1k                |   x1 |
| 3     | Resistor 2k                |   x1 |
| 4     | PowerBank                  |   x1 |
| 5     | Shoes                      |   x1 |
| 6     | Atmega8                    |   x2 |
| 7     | Arduino Uno R3             |   x1 |
| 8     | HC-SRO4 Ultrasonic sensor  |   x2 |
| 9     | 9V Battery                 |   x2 |
| 9     | Cables and Jumper wires    |   XX |


## Construction

Given below is a diagram of  the connections, the components need to be connected according to the figure given below and the necessary  code needs to be uploaded .then this system needs to be mounted on to a shoe. This has to be done twice .To reduce cost instead of using a general purpose microcontroller like Arduino we used a custom PCB  called Atmega8.

![alt text]( https://vibhoothiiaanand.files.wordpress.com/2018/10/screenshot-2018-10-12-at-9-09-36-pm.png "Construction ")


Connect Raspberry Pi to the sensor: Use 1 kilo-ohm and 2 kilo-ohm resistors to reduce the voltage from 5V to 3V. When connecting echo, connect trig directly using a jumper. Connect ground to GPIO6 and VCC to GPIO2. Get the python code given separately into the Raspberry Pi. Power the RPi using a power bank .Run it from LX terminal using : sudo python range _ sensor111.py. 

We can  set for auto-start. Then you need not use any commands. The code will execute automatically when we power the Raspberry Pi. 

![alt text]( https://vibhoothiiaanand.files.wordpress.com/2018/10/screenshot-2018-10-12-at-9-09-41-pm.png "Construction ")

## Algorithm

Ultrasonic distance sensors consist of 3 major parts:   A transmitter, a receiver and a timer. 
To measure a distance in this project we are using the ultrasonic sensor, the timer triggers the transmitter which emits a series of pulses, and then the timer will be waiting  until the receiver detects the reflection of the pulses and then it stops the timer.  The time measured is then divided by 2 and multiplied with the speed of sound. The result is the distance between the sensor and the object in front of it. Sound takes around 29.1 milliseconds to travel 1 cm, so we need to divide it by 29.1 so the equation will be like,
distance = (time/2)/29.1
Right Shoe: The sensors are kept facing the front. once distance is calculated by both the sensors it is checked whether distance is  less than 30 cm, if the boolean output is received as  yes then,its checks whether the distances are equal or not if it is true then the vibration more  vibrates for around  2.5 sec is given otherwise vibrations are created which correspond to the detection of an obstacle( lasting .2 sec). Then distance is again calculated and the cycle repeats until user stops walking or removes the gadget.
Left shoe: The sensors are kept facing the ground. The system mounted on the left shoe works similarly but the code used is slightly different it can be understood by taking a look at the codes given separately.
Locket : This has a Ultrasonic sensor which detects distance and sends it to the Raspberry Pi. It checks whether the distance is less than 100cm. If yes, then it will read out the following :
“Stop, Obstacle ahead at %d cm;”
 Where %d is the distance calculated by the ultrasonic sensor. It then decides which side (left/right) is obstacle free and speaks it out to the blind person .then, distance is again calculated and the cycle repeats.
The locket is the main part of the project which gives more realistic output and helpful


## Data Flow Diagram 

![alt text]( https://vibhoothiiaanand.files.wordpress.com/2018/10/screenshot-2018-10-12-at-9-09-46-pm.png "dataFlowDiagram ")

## Applications 
The applications for this device are numerous which are as follows: 
* It works as a navigation device for the blind people. It detects obstacle in the ground and can differentiate between a staircase and an obstacle. It can also assist the visually impaired in climbing up/down the stairs.
* This system can be used to navigate by everyone not only visually impaired under certain circumstances, like foggy mornings with low visibility. 
* The system can be made to more advance by introducing machine learning and artificial Intelligence.
* This system can also be used by patients suffering with various eye ailments like cataract, xerophthalmia, post eye operative situations and others. 
* This can be extended by using ranger finders which can detect the obstacle presence from a longer distance and also helps in increasing the efficiency of the system. 
* The system can be modified to be used as personal assistant using various voice recognition software like Jasper, by connecting it to internet this product will revolutionize the navigation of visually impaired.

## Advantages
* Some advantages of the projects are:-
* Obstacle detection using ultrasonic sensor. 
* Efficient low cost design.  
* Low power consumption.  


## Drawbacks
* It will fail to categorize humans and machines 
* Small obstacles cannot be tracked using this 
* If it's a rapid  obstacle coming there is  high chance to fail the model
* It wont alert users when obstacles which is longer than few meters.

