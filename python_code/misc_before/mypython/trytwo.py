# -*- coding: utf-8 -*-
import urllib
def print_list(list):
    for i in list:
        print i



def demo():
    s=urllib.urlopen('http://www.douban.com/people/brainlink/')
    # print_list(s.readlines())

    print_list(dir(s.info()))

    # print 'hello'



if __name__=='__main__':
    demo()