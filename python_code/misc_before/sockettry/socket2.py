# -*- coding: utf-8 -*-
import socket
port = 8088
s=socket.socket()
name=socket.gethostname()
s.bind((name,port))
s.listen(5)
print "waiting..."
while True:
    c,addr = s.accept()
    print 'ffffffff:'+str(addr)
    c.send('thank you for link')
    c.close()
