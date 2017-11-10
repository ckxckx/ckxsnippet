# -*- coding: utf-8 -*-
import socket
target_host="127.0.0.1"
target_port=9999
client=socket.socket()

client.connect((target_host,target_port))
client.send("OHHHHHHHHHH")

response=client.recv(4096)
print response
# -*- coding: utf-8 -*-
