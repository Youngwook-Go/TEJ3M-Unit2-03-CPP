"""
Created by: Youngwook Go
Created on: OCT 2023
Blinks a LED
"""

import time
import board
import digitalio

led = digitalio.DigitalInOut(board.GP14)
led.direction = digitalio.Direction.OUTPUT

while True:
	led.value = True
	time.sleep(1)
	led.value = False
	time.sleep (1)