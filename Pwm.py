from machine import Pin,PWM,ADC
from time import sleep
led=PWM(Pin(4),5000)#f=1hz to 40 MHz
ldr=ADC(Pin(34))
ldr.width(ADC.WIDTH_10BIT)#Resolution :12bit:0-1023
ldr.atten(ADC.ATTN_11DB)#3.3v
while True:
    x=ldr.read()
    print(x)
    led.duty(1023-x)
    sleep(0.1)
