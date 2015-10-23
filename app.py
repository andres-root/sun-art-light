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
    except IOError:
        raise('Please reconnect the Arduino device')
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


if __name__ == '__main__':
    blink_flares()
