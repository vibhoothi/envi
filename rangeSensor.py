import pyttsx
import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM) 
TRIG = 9
ECHO = 10 

while True:
  a=100
  engine = pyttsx.init()
 
 print "Distance Measurement In Progress"
 GPIO.setwarnings(False)
 GPIO.setup(TRIG,GPIO.OUT)
 GPIO.setup(ECHO,GPIO.IN) 
 GPIO.output(TRIG, False)
 print "Waiting For Sensor To Settle"
 time.sleep(.5)

 GPIO.output(TRIG, True)
 time.sleep(0.00001)
 GPIO.output(TRIG, False)
 start = time.time() 

 while GPIO.input(ECHO)==0:
   start = time.time()

 while GPIO.input(ECHO)==1:
   end = time.time()
 duration = end - start
 distance = duration * 17150
 distance = round(distance, 2)

 print "Distance:",distance,"cm"

 if distance<=a: 
  engine.say("Stop,Obstacle ahead at (%d) centimeters"%distance)
  engine.runAndWait()

GPIO.cleanup()
