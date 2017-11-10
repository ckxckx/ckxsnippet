# -*-coding: utf-8 -*-
import requests
from HTMLParser import HTMLParser

class MovieParser(HTMLParser):
    def __init__(self):
        HTMLParser.__init__(self)
        self.movies = []
        self.in_movies = False

    def handle_starttag(self, tag, attrs):  #猜测feed方法中循环调用handle_starttag函数，传入标签和属性列表，属性列表是个二阶数组（列表）
        def _attr(attrlist,attrname):     #遍历列表中的每一个属性——元素单位
            for attr in attrlist:          #检验属性
                if attr[0]==attrname:
                    return attr[1]
            return None
        if tag == 'li' and _attr(attrs,'data-title') and _attr(attrs,'data-category')=='nowplaying':
            movie = {}
            movie['title']=_attr(attrs,'data-title')
            movie['score']=_attr(attrs,'data-score')
            movie['director']=_attr(attrs,'data-director')
            movie['actors']=_attr(attrs,'data-actors')
            self.movies.append(movie)
            print('%(title)s|%(score)s|%(director)s'%movie)
            self.in_movies = True


        if  tag == 'img' and self.in_movies:
            # print 1111111111111111
            self.in_movies = False
            src = _attr(attrs, 'src')
            movie = self.movies[len(self.movies)-1]
            movie['poster-url'] = src
            _download_poster_image(movie)



def _download_poster_image(movie):
    src= movie['poster-url']
    r=requests.get(src)
    fname=src.split('/')[-1]
    with open('mydir/%s' %fname,'wb') as f:
        f.write(r.content)
        movie['poster-path'] ='mdir/%s' %fname





def nowplaying_movies(url):
    # headers={'User-Agent':'Mozilla/5.0 (Windows NT 6.3; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/45.0.2454.101 Safari/537.36'}
    # req=urllib2.Request(url)
    r=requests.get(url)
    # req=urllib2.Request(url,headers=headers)

    parser=MovieParser()
    parser.feed(r.content)

    return parser.movies





if __name__=='__main__':
    url='http://movie.douban.com/nowplaying/beijing/'
    movies=nowplaying_movies(url)

    import json
    print 'json start'
    print('%s' %json.dumps(movies,sort_keys=True,indent=4,separators=(',',':')))


    # print 'my test'
    # print movies[0]['director']