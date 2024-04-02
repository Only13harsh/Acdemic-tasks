import machine 
from machine import Pin, SoftI2C 
from lcd_api import LcdApi 
from i2c_lcd import I2cLcd 
from time import sleep

I2C_ADDR = 0x27 
totalRows = 2 
totalColumns = 16

i2c = SoftI2C(scl=Pin(22), sda=Pin(21), freq=10000) 				#initializing the I2C method for ESP32 
#i2c = I2C(scl=Pin(5), sda=Pin(4), freq=10000) 						#initializing the I2C method for ESP8266 

lcd = I2cLcd(i2c, I2C_ADDR, totalRows, totalColumns)

rupee= bytearray([ 0x1F,
  0x02,
  0x1F,
  0x08,
  0x18,
  0x04,
  0x02,
  0x01])
swastika= bytearray([ 0x07,
  0x14,
  0x14,
  0x1F,
  0x05,
  0x05,
  0x1C,
  0x00])
while True: 
	lcd.custom_char(0,swastika)
	lcd.custom_char(0,rupee)
	lcd.move_to(0,1)
	lcd.putstr(chr(0)+"ESP32 with I2C LCD"+ chr(1))


	"""lcd.putstr("HARSH SINGH") 	
	sleep(2) 
	lcd.clear() 
	
	lcd.putstr("Lets Count 0-10!")
	sleep(2) 
	lcd.clear() 	
	
	for i in range(11):
		lcd.putstr(str(i)) 
		sleep(1) 
		lcd.clear()
		"""
