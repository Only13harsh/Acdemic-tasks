import machine
import time

f1 = 0
f2 = 0
count = 0

pin_2 = machine.Pin(34, machine.Pin.IN)
pin_0 = machine.Pin(14, machine.Pin.IN)

while True:
    x = pin_2.value()
    y = pin_0.value()

    if x and not f1:
        count += 1
        print("Total number of students:", count)
        f1 = 1

    elif not x:
        f1 = 0

    if y and count > 0 and not f2:
        count -= 1
        print("Total number of students:", count)
        f2 = 1

    elif not y:
        f2 = 0

    time.sleep(0.1)
    
