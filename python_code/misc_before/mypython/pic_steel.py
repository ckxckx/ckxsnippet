# -*- coding: utf-8 -*-
# http://10.200.21.61:7001/ieas2.1/xswhxx/showPhoto?xh=14291203
import requests
import urllib
def steal():
    front='http://10.200.21.61:7001/ieas2.1/xswhxx/showPhoto?xh='

    # for i in range(10):
    #     num=14291100
    #     num=i+num
    #     url=front+str(num)
    #     fname=str(num)
    #     r=requests.get(url)
    #     with open('mydir3/%s' %fname , 'wb' ) as f:
    #         f.write(r.content)
    #     print url
    #




if __name__=='__main__':
    # steal()

    # r=requests.get('http://10.200.21.61:7001/ieas2.1/xswhxx/showPhoto?xh=14291203')



    with open('mydir3/14291203.JPG', 'wb') as f:
         f.write(r.content)

