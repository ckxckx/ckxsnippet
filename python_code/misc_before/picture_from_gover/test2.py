# -*- coding: utf-8 -*-
import requests
import os
def URLMaker(num):
    beginner='http://10.200.21.61:7001/ieas2.1/xswhxx/showPhoto?xh='
    theWhole=beginner+str(num)
    return theWhole



def PictureCatcher(num,fname):
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
    url = URLMaker(num)
    req=requests.get(url, headers=headers)
    command='mkdir %s' %fname
    os.system(command)
    with open('%s/%s.jpg' %(fname,str(num)), 'wb') as f:
        f.write(req.content)




if __name__ == '__main__':
    for i in range(14031001,14031254):
        PictureCatcher(i,'1403')