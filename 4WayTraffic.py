#4 way traffic light sytem using Esp32
from machine import Pin
from time import sleep
Red4 = Pin(16, Pin.OUT)
Yellow4 = Pin(15, Pin.OUT)  
Green4 = Pin(2, Pin.OUT)

Red3 = Pin(23, Pin.OUT)
Yellow3 = Pin(21, Pin.OUT)
Green3 = Pin(17, Pin.OUT)

Green2 = Pin(33, Pin.OUT)
Yellow2 = Pin(25, Pin.OUT)
Red2 = Pin(26, Pin.OUT)

Green1 = Pin(27, Pin.OUT)
Yellow1 = Pin(14, Pin.OUT)
Red1 = Pin(12, Pin.OUT)
while True:
    Red3.off()
    Red1.off()
    Green1.on()
    Green3.on()

    Red2.on()
    Red4.on()
    Green2.off()
    Green4.off()
    print("North Go |South GO---")
    sleep(4)
    Red3.off()
    Green1.off()
    Green3.off()
    Yellow3.on()
    Yellow1.on()

    Red2.off()
    Red4.off()
    Yellow2.on()
    Yellow4.on()
    print("North READY to wait | South  READY to wait")
    sleep(2)
    Yellow3.off()
    Yellow1.off()
    Red3.on()
    Red1.on()

    Yellow2.off()
    Yellow4.off()
    Green2.on()
    Green4.on()
    print("---Lane 1 STOP | Lane 3 STOP---")
    sleep(4)

