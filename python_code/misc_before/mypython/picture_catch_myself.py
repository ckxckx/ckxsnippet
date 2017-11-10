# -*- coding: utf-8 -*-
import requests
from HTMLParser import  HTMLParser

class BookParser(HTMLParser):
    def __init__(self):
        HTMLParser.__init__(self)
        self.begin=False
        self.books=[]


    def handle_starttag(self, tag, attrs):

        def _attr(attrs,attrname):
            for attr in attrs:
                if attr[0]== attrname:
                    return attr[1]
            return None

        if tag == 'div' and _attr(attrs,'class')== 'carousel':
            self.begin=True

        if tag == 'div' and _attr(attrs,'id') == 'dale_book_home_left_top':
            self.begin = False

        if tag == 'img' and self.begin and _attr(attrs,'alt'):
            book={}
            book['src']=_attr(attrs,'src')
            book['alt']=_attr(attrs,'alt')
            self.books.append(book)
            _down_load_img(book['src'])
            # print book['alt']
            # print book['src']



def _down_load_img(url):
    r=requests.get(url)
    fname=url.split('/')[-1]
    with open('mydir2/%s' % fname, 'wb') as f:
        f.write(r.content)





def picsearch(url):
    r=requests.get(url)
    parser=BookParser()
    parser.feed(r.content)




if __name__ =='__main__':
    url='http://book.douban.com/'
    picsearch(url)

