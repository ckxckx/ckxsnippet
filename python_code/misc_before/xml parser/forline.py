# -*- coding: utf-8 -*-
# 会有些损失的xml解析方法



from lxml import etree

def duxie(content):
    selector=etree.HTML(content)
    myobj=selector.xpath(r'//host/status[@state="up"]/../address[@addrtype="ipv4"]/@addr')
    f2=open("result2.txt","a")
    for myline in myobj:
        f2.write(myline+"\n")
    f2.close()




f=open("output1.xml", "r")
i=0
key=0
content0=""
for line in f:
    i=i+1
    # print line
    # if key=0:
    if i<100:
        content0=content0+line
    else:
        i=0
        duxie(content0)
        content0=""
