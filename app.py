#!/usr/local/bin/python
from __future__ import print_function
import serial
import time


def clean_data():
    return True


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
    write_to_serial()
