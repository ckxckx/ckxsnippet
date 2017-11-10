# -*- coding: utf-8 -*-
from telnetlib import Telnet
host='192.168.1.1'
user='admin'
tn=Telnet(host,23)
print tn.read_until()
