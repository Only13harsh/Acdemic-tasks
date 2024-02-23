from machine import Pin
import time

segments = [Pin(2, Pin.OUT), Pin(0, Pin.OUT), Pin(4, Pin.OUT), Pin(16, Pin.OUT), Pin(17, Pin.OUT), Pin(5, Pin.OUT), Pin(18, Pin.OUT)]

digit_0 = [0, 0, 0, 0, 0, 0, 1]
digit_1 = [1, 0, 0, 1, 1, 1, 1]

def display_digit(digit):
    for i in range(7):
        segments[i].value(digit[i])

while True:
    display_digit(digit_0)
    time.sleep(1)
    display_digit(digit_1)
    time.sleep(1)
