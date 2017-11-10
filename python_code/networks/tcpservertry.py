# -*- coding: utf-8 -*-
import socket
import threading
local_ip="127.0.0.1"
local_port=9998
server=socket.socket()
server.bind((local_ip,local_port))
server.listen(7)
print "[*]listening"
def client_handle(client):
    request=client.recv(1024)
    print "[*]receive ::::"+request
    client.send("222222222222222huo")


while True:
    client,addr=server.accept()
    print "[*]Accepted connection from: %s:%s" %(addr[0],addr[1])
    print addr

    client_handler=threading.Thread(target=client_handle,args=(client,))
    client_handler.start()





