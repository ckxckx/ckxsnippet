# -*- coding: utf-8 -*-
import urllib2
from HTMLParser import HTMLParser
class MovieParser(HTMLParser):
    def __init__(self):
        HTMLParser.__init__(self)
        self.movies=[]
        self.num=0

    def handle_starttag(self, tag, attrs):
        def _attr(attrlist,attrname):
            for attr in attrlist:
                if attr[0]==attrname:
                    return attr[1]
            return None

        if tag=='li' and _attr(attrs,'data-title') and _attr(attrs,'data-category')=='nowplaying':
            movie={}
            movie['title']=_attr(attrs,'data-title')
            movie['score']=_attr(attrs,'data-score')
            movie['director']=_attr(attrs,'data-director')
            movie['actors']=_attr(attrs,'data-actors')
            self.movies.append(movie)
            self.num=self.num+1
            tagnum=self.num
            movie['tagnum']=tagnum
            # print tagnum
            # print('num is %d%d'%(tagnum,tagnum))
            print('%(tagnum)d::%(title)s|||%(score)s|||%(director)s'%movie)




def nowplaying_movies(url):
    req=urllib2.Request(url)
    # print req.headers
    s=urllib2.urlopen(req)
    parser=MovieParser()
    parser.feed(s.read())
    s.close
    return parser.movies


if __name__=='__main__':
    url='http://movie.douban.com/nowplaying/beijing/'
    movies=nowplaying_movies(url)

