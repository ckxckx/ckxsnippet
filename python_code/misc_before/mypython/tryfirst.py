# -*- coding: utf-8 -*-
# print 'dafdfassssssssss'

import urllib
def demo():
    s=urllib.urlopen('http://www.baidu.com')
    fname,msg=urllib.urlretrieve('http://10.200.21.61:7001/ieas2.1/xswhxx/showPhoto?xh=14051174','1111.html')
    print msg
    print fname
    # print(s.read())
    # dir(urllib)
    # print('ffffffffffff')


if __name__=='__main__':
    demo()