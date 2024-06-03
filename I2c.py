from machine import Pin, SoftI2C, time_pulse_us
from ssd1306 import SSD1306_I2C
from i2c_lcd import I2cLcd
from time import sleep

TRIG_PIN = 16
ECHO_PIN = 17
SOUND_SPEED = 340.29  
trig = Pin(TRIG_PIN, Pin.OUT)
echo = Pin(ECHO_PIN, Pin.IN)

def measure_distance():
    trig.value(0)
    sleep(0.000002) 
    trig.value(1)
    sleep(0.00001) 
    trig.value(0)
    duration = time_pulse_us(echo, 1)  
    distance = (duration * SOUND_SPEED) / (2 * 10000)  
    return distance

I2C_ADDR = 0x27 
totalRows = 4
totalColumns = 20	
i2c = SoftI2C(scl=Pin(22), sda=Pin(21), freq=100000)
lcd = I2cLcd(i2c, I2C_ADDR, totalRows, totalColumns)

I2C_ADDR = 0x3c
oled_width = 128
oled_height = 64
oled = SSD1306_I2C(oled_width, oled_height, i2c, I2C_ADDR)
oled.invert(True)
oled.pixel(21,24,1)
oled.text('Embedded', 0, 0, 1)
oled.text(' Systems', 7, 8)
oled.text('Micro Python', 14, 16)
oled.show()

while True:
    distance = measure_distance()
    lcd.clear()
    lcd.move_to(0, 0)
    lcd.putstr(f"Distance : {distance:.2f} cm")
    sleep(2)
