# -*- coding: utf-8 -*-
##==================================================
######使用说明：
######根据抓包，修改MYURL与headers
######version---1.0
######zoomeye似乎加载了防止爬取的规则，cookie变化超级快，这个似乎抓取效率不高

import requests
from lxml import etree
#################数据爬取范例脚本##########################
MYURL='http://cache.baiducontent.com/c?m=9f65cb4a8c8507ed4fece76310538c3f42438014798a8d5e38888448e4391b145a23bee66c654c13d2b6393a5cff0e00acb72b66725e60e1948dd51796fcce3f2ef83044070bf64605a26db8bf45&p=82759a46d6c10ee906be9b7c4b568a&newp=882a9645d48c12a05aa9ce205a0cc9231610db2151d6d201298ffe0cc4241a1a1a3aecbf26201a02d9ce766d00af4e5de1fb3375330834f1f689df08d2ecce7e60&user=baidu&fm=sc&query=wooyun%BE%B5%CF%F1&qid=a4b83909000105f8&p1=5'

def ShowHtml(url):
#######################################################################################
    headers={
        'Host': 'cache.baiducontent.com',
        'Connection': 'keep-alive',
        'Cache-Control':'max-age=0',
        'Upgrade-Insecure-Requests': '1',
        'User-Agent': 'Mozilla/5.0 (Windows NT 6.3; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/52.0.2743.82 Safari/537.36',
        'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8',
        'Referer': 'https://www.baidu.com/s?wd=wooyun%E9%95%9C%E5%83%8F&rsv_spt=1&rsv_iqid=0xa454cbc30000dc43&issp=1&f=8&rsv_bp=0&rsv_idx=2&ie=utf-8&tn=57095150_1_oem_dg&rsv_enter=1&rsv_sug3=13&rsv_sug1=8&rsv_sug7=101&rsv_sug2=0&inputT=3001&rsv_sug4=3672',
        'Accept-Encoding': 'gzip, deflate, sdch',
        'Accept-Language': 'zh-CN,zh;q=0.8',



}
    ###################################################################
    s=requests.get(url, headers=headers)
    print s.text
    # selector=etree.HTML(s.text)
    # myobj = selector.xpath(r"//h3/a[@class='ip']/text()")
    # # print myobj
    # for line in myobj:
    #     print line
if __name__ == '__main__':
    ShowHtml(MYURL)