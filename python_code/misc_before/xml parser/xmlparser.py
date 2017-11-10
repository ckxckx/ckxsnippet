# -*- coding: utf-8 -*-
from lxml import etree#####这个库很好用
##############open需要解析的文本#####################################
f=open("output1.xml", "r")
myobj = f.read()
f.close

######选择器
selector=etree.HTML(myobj)
#############xpath函数中写入解析筛选规则#########################################
myobj=selector.xpath(r'//host/status[@state="up"]/../address[@addrtype="ipv4"]/@addr')
###########保存进入文本#############
f2=open("result.txt","w")
for line in myobj:
    f2.write(line+"\n")
f2.close()