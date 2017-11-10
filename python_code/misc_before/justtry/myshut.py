# -*- coding: utf-8 -*-
import os
import sys
import time
import winsound
commandline='shutdown -s -t 30'

time.sleep(300)
winsound.Beep(900,1000)
winsound.Beep(1000,1000)
winsound.Beep(2000,1000)
winsound.Beep(3000,1000)

os.system(commandline)

