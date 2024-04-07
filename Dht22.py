import machine
from machine import Pin, SoftI2C, sleep
from i2c_lcd import I2cLcd
import dht

# Initialize the DHT22 sensor and the LCD
sensor = dht.DHT22(Pin(23))
i2c = SoftI2C(scl=Pin(22), sda=Pin(21))
lcd = I2cLcd(i2c, 0x27, 2, 16)

# Initialize the LEDs
red_led = Pin(27, Pin.OUT)
green_led = Pin(26, Pin.OUT)

while True:
    try:
        sensor.measure()
        temp = sensor.temperature()  # Get the temperature
        hum = sensor.humidity()      # Get the humidity
        
        # Check the temperature conditions and control the LEDs
        if temp > 25:
            green_led.on()
            red_led.off()
            lcd.putstr('AC on\nTemp: {:.1f}C\nHum: {:.1f}%'.format(temp, hum))
        elif temp < 20:
            red_led.on()
            green_led.off()
            sleep(0.1)  # Small delay to ensure the LED stays on
            lcd.putstr('Heater on\nTemp: {:.1f}C\nHum: {:.1f}%'.format(temp, hum))
        else:
            red_led.off()
            green_led.off()
            lcd.putstr('Optimal Room Temp\nTemp: {:.1f}C\nHum: {:.1f}%'.format(temp, hum))
        
        sleep(2)  # Main loop delay
    except TypeError as e:
        print("Type error: {0}".format(e))
        print("Continuing...")
        sleep(2)  # Main loop delay
