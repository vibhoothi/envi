import pyttsx
import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM) 
TRIG = 9
ECHO = 10 


GPIO.cleanup()
