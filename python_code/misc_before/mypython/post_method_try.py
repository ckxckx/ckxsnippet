# -*- coding: utf-8 -*-
# source:None
# redir:https://www.douban.com/people/brainlink/
# form_email:ckx1025ckx@163.com
# form_password:19951025a
# remember:on
# login:登录




import requests
url= 'https://accounts.douban.com/login'
def run():
    data = {
        'source':'None',
        'redir':'https://www.douban.com/people/brainlink/',
        'form_email':'ckx1025ckx@163.com',
        'form_password':'19951025a',
        'remember': 'on',
        'login':'登录'
    }
    r= requests.post(url,data=data)
    # print r.content
    # f=open('post_try.html', 'w')
    # f.write(r.content)
    # f.close
    print r.headers






if __name__ == '__main__':
    run()
