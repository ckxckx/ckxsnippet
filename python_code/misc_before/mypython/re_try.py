# -*- coding: utf-8 -*-
import re
def re_try():
    data = 'my price is $9.9, but the total kind is 100.'
    data2 = '塞下曲·月黑雁飞高'     #(卢纶)'
    data3 = '(卢纶)000'
    # r2 = re.compile(r'(.*)\((.*)\)', re.VERBOSE)
    # print r2.search(data2).group()
    # r=re.search(r'\$(\d+\.\d+)', data)
    j=re.match(r'\(?(.+)\)?', data3)
    print j
    print j.group()
    print j.group(1)
    # r=re.compile(r'\$(\d+\.\d+).*\s(\d*)', re.VERBOSE)
    # m=r.search(data)
    # print m.group(2)
    
# 塞下曲·月黑雁飞高
# (卢纶)



# <a href="/view_20788.aspx" target="_blank">行宫</a>
# (元稹)







if __name__ =='__main__':
    re_try()

