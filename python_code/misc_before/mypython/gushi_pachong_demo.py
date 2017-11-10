# -*- coding: utf-8 -*-
import requests
import re
from HTMLParser import HTMLParser

def _attr(attrs, attrname):
    for attr in attrs:
        if attr[0] == attrname:
            return attr[1]

    return  None



class INFOParser(HTMLParser):
    def __init__(self):
        HTMLParser.__init__(self)
        self.in_div = False
        self.in_a = False
        self.gushi_list=[]
        # self.pattern = re.compile(r'\({0,1}(.*)\){0,1}')
        self.pattern = re.compile(r'\(?(\w*)\)?')
                   # r2 = re.compile('(.*)\((.*)\)', re.VERBOSE)
        self.count = 1
###################################想要写一个正则匹配去掉括号的部分######还是太嫩，深入学习后回头考虑
    def handle_starttag(self, tag, attrs):
        if tag == 'div' and _attr(attrs, 'class') == 'son2':
            self.in_div = True
        if tag == 'a' and self.in_div:
            self.in_a = True


    def handle_endtag(self, tag):
        if tag =='div':
            self.in_a = False
            self.in_div = False



    def handle_data(self, data):
        if self.in_a:
            # print self.count
            #  print data
            # self.count=self.count+1
            # alternate=re.compile(r'(.+)\((.+)\)', data)
            # print alternate.group(0)

            m=self.pattern.match(data)
            if m:
                print 'print:'
                print m.group(1)



def show_me_the_list():
    url = 'http://so.gushiwen.org/gushi/tangshi.aspx'


    r=requests.get(url)
    parser=INFOParser()
    parser.feed(r.content)
    return parser.gushi_list


if __name__=='__main__':
   show_me_the_list()
