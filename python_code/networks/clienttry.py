# -*- coding: utf-8 -*-
import socket
tcp_ip="127.0.0.1"
tcp_port = 9998

client=socket.socket()
client.connect((tcp_ip,tcp_port))
client.send("66666666666666")

response=client.recv(4096)
print response
