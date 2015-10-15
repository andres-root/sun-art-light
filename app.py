#!/usr/local/bin/python
from __future__ import print_function
import random
import time
import serial


def blink_flares():
    filename = 'cleaned_data.txt'
    flare_delays = open(filename, 'r').read().split(',')
    leds = [b'1', b'2', b'3', b'4', b'5', b'6', b'7', b'8', b'9', b'0', b'A', b'B']
    try:
        port = serial.Serial('/dev/cu.usbmodem1421', 9600)
    except Exception:
        port = serial.Serial('/dev/cu.usbmodem1411', 9600)

    mem_led = 0

    for delay in flare_delays:
        led = random.choice(leds)
        while mem_led == led:
            led = random.choice(leds)
        mem_led = led
        port.write(led)
        print('led: {0}'.format(led))
        # print('delay: {0}'.format(delay))
        # port.write(delay)
        time.sleep(3)


def write_to_serial():
    filename = 'data.txt'
    content = open(filename, 'r').readlines()
    data = [c.replace('\n', '') for c in content]
    port = serial.Serial('/dev/cu.usbmodem1421', 9600)

    for i in range(len(data)):
        cmnd = '{0}'.format(data[i]).encode()
        print(cmnd)
        port.write(cmnd)
        time.sleep(.500)


if __name__ == '__main__':
    # write_to_serial()
    blink_flares()
