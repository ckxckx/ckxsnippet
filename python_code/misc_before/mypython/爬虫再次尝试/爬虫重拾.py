# -*- coding: utf-8 -*-
##==================================================
######使用说明：
######根据抓包，修改MYURL与headers
######version---1.0
######zoomeye似乎加载了防止爬取的规则，cookie变化超级快，这个似乎抓取效率不高

import requests
from lxml import etree
#################数据爬取范例脚本##########################
MYURL='https://www.zoomeye.org/search?q=.buaa&p=3'

def ShowHtml(url):
#######################################################################################
    headers={'Host': 'www.zoomeye.org',
             'Connection': 'keep-alive',
             'Upgrade-Insecure-Requests': 1,
             'User-Agent': 'Mozilla/5.0 (Windows NT 6.3; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/52.0.2743.82 Safari/537.36',
             'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8',
             'Accept-Encoding': 'gzip, deflate, sdch, br',
             'Accept-Language': 'zh-CN,zh;q=0.8',
             'Cookie': '__jsluid=280ffcb36db9c5ffa7684fc59f6ddbab; csrftoken=sSaT9ZAgmPske1Sh33UgWHu9S7iPP6UY; sessionid=czlj0l7d560nhx6j5ho5taxyzzdqo9x5; Hm_lvt_e58da53564b1ec3fb2539178e6db042e=1468836265,1468888660,1469332033,1469344802; Hm_lpvt_e58da53564b1ec3fb2539178e6db042e=1469362485; __jsl_clearance=1469362500.955|0|C6JZu7uvFXFtEWJu8fgjSBh0Gz8%3D'

}
    ###################################################################
    s=requests.get(url, headers=headers)
    print s.text
    selector=etree.HTML(s.text)
    myobj = selector.xpath(r"//h3/a[@class='ip']/text()")
    # print myobj
    for line in myobj:
        print line
if __name__ == '__main__':
    ShowHtml(MYURL)