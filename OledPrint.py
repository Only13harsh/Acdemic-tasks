from machine import Pin, SoftI2C 
from ssd1306 import SSD1306_I2C
from time import sleep 

# ESP32 Pin assignment 
i2c = SoftI2C(scl=Pin(22), sda=Pin(21), freq=100000) 
# ESP8266 Pin assignment 
#i2c = SoftI2C(scl=Pin(5), sda=Pin(4), freq=100000) 

I2C_ADDR = 0x3c
oled_width = 128 
oled_height = 64 
oled = SSD1306_I2C(oled_width, oled_height, i2c, I2C_ADDR) 

oled.text('Hello, World 1!', 0, 0, 1) 
oled.text(‘Embedded Systems', 7, 8) 
oled.text(‘Micro Python', 14, 16) 
oled.show()
