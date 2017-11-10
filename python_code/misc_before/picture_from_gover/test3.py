# -*- coding: utf-8 -*-
import requests
import os
#下载函数，传入参数完整url、目录名称、图片命名
def _download(url,fname,name):
    headers={'Accept': '*/*',
            'Referer': 'http://10.200.21.61:7001/ieas2.1/xswhxx/queryXswhxx',
            'Accept-Language': 'zh-CN',
            'User-Agent': 'Mozilla/4.0 (compatible; MSIE 7.0; Windows NT 6.3; WOW64; Trident/7.0; Touch; .NET4.0E; .NET4.0C; Tablet PC 2.0; .NET CLR 3.5.30729; .NET CLR 2.0.50727; .NET CLR 3.0.30729; GWX:RESERVED; LCJB)',
            'Accept-Encoding': 'gzip, deflate',
            'Connection': 'Keep-Alive',
            'DNT': '1',
            'Host': '10.200.21.61:7001',
            'Cookie': 'JSESSIONID=2H2JWQRC6v20DJkqyrQtM2jLGyt5JymPgpQZrqqDhFTLyTKF!579867196'
                        #jsessionid需要通过登入后抓包获取

            }

    req=requests.get(url, headers=headers)
    with open('%s/%s.jpg' %(fname,name), 'wb') as f:
        f.write(req.content)


#制作url，传入学好参数
def URLMaker2(name):
    beginner='http://10.200.21.61:7001/ieas2.1/xswhxx/showPhoto?xh='

    theWhole=beginner+str(name)
    return theWhole
#生成目录和文件，传入参数系序号和学号
def NameMaker(num_xi, i):
    name=num_xi*10000+1000+i
    return str(name)


#主函数生成序号
def xi(num_xi):
    path='D:\\picturebysteal\\'+str(num_xi)
    command='mkdir %s' %path
    os.system(command)

    for i in range(0,260):
        name=NameMaker(num_xi,i)
        url=URLMaker2(name)
        _download(url, path,name)
        print url




if __name__ == '__main__':
    # for i in range(1501,1530):
    #     xi(i)
    for i in range(1419,1420):
        xi(i)
