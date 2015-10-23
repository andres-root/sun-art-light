#!/usr/local/bin/python
from __future__ import print_function
import time
import serial


# Main function
def blink_flares():
    filename = 'cleaned_data.txt'
    flare_delays = open(filename, 'r').read().split(',')
    try:
        port = serial.Serial('/dev/cu.usbmodem1421', 9600)
    except Exception:
        port = serial.Serial('/dev/cu.usbmodem1411', 9600)

    time.sleep(2)

    for delay in flare_delays:
        print('delay: {0}'.format(delay))
        port.write(delay)
        fdelay = float('.{0}'.format(delay))
        print(fdelay)
        while True:
            if '1' in port.read():
                break
        print('------------------')


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
