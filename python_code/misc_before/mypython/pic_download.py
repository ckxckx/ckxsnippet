# -*- coding: utf-8 -*-
# Accept: */*
# Referer: http://10.200.21.61:7001/ieas2.1/xswhxx/queryXswhxx
# Accept-Language: zh-CN
# User-Agent: Mozilla/4.0 (compatible; MSIE 7.0; Windows NT 6.3; WOW64; Trident/7.0; Touch; .NET4.0E; .NET4.0C; Tablet PC 2.0; .NET CLR 3.5.30729; .NET CLR 2.0.50727; .NET CLR 3.0.30729; GWX:RESERVED; LCJB)
# Accept-Encoding: gzip, deflate
# Connection: Keep-Alive
# DNT: 1
# Host: 10.200.21.61:7001
# Cookie: JSESSIONID=jBvvWQhJDydygYL5gQ0hyGyySs94Vc5pJtxHzL2LdBJgy0hmbkGn!579867196

# 'Accept': '*/*'
# 'Referer': 'http://10.200.21.61:7001/ieas2.1/xswhxx/queryXswhxx'
# 'Accept-Language': 'zh-CN'
# 'User-Agent': 'Mozilla/4.0 (compatible; MSIE 7.0; Windows NT 6.3; WOW64; Trident/7.0; Touch; .NET4.0E; .NET4.0C; Tablet PC 2.0; .NET CLR 3.5.30729; .NET CLR 2.0.50727; .NET CLR 3.0.30729; GWX:RESERVED; LCJB)'
# 'Accept-Encoding': 'gzip, deflate'
# 'Connection': 'Keep-Alive'
# 'DNT': '1'
# 'Host': '10.200.21.61:7001'
# 'Cookie': 'JSESSIONID=jBvvWQhJDydygYL5gQ0hyGyySs94Vc5pJtxHzL2LdBJgy0hmbkGn!579867196'





import urllib2
import requests


def ShowPic(url):
    headers={'Accept': '*/*',
            'Referer': 'http://10.200.21.61:7001/ieas2.1/xswhxx/queryXswhxx',
            'Accept-Language': 'zh-CN',
            'User-Agent': 'Mozilla/4.0 (compatible; MSIE 7.0; Windows NT 6.3; WOW64; Trident/7.0; Touch; .NET4.0E; .NET4.0C; Tablet PC 2.0; .NET CLR 3.5.30729; .NET CLR 2.0.50727; .NET CLR 3.0.30729; GWX:RESERVED; LCJB)',
            'Accept-Encoding': 'gzip, deflate',
            'Connection': 'Keep-Alive',
            'DNT': '1',
            'Host': '10.200.21.61:7001',
            'Cookie': 'JSESSIONID=jBvvWQhJDydygYL5gQ0hyGyySs94Vc5pJtxHzL2LdBJgy0hmbkGn!579867196'
            }
    req=urllib2.Request(url, headers=headers)
    # req=urllib2.Request(url,headers=headers)
    s=urllib2.urlopen(req)
    with open('1ffffffff.jpg', 'wb') as f:
        f.write(s.read())
    s.close



if __name__ == '__main__':
    ShowPic('http://10.200.21.61:7001/ieas2.1/xswhxx/showPhoto?xh=14051173')

