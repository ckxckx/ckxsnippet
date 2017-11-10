# -*- coding: utf-8 -*-
import socket
port = 8088
s=socket.socket()
name=socket.gethostname()
s.connect((name,port))
print s.recv(1024)