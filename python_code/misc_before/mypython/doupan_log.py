# -*- coding: utf-8 -*-
import requests
from HTMLParser import HTMLParser


class DoubanClient(object):
    def __init__(self):
        object.__init__(self)
        headers={'user-agent': 'Mozilla/5.0 (Windows NT 6.3; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/45.0.2454.101 Safari/537.36',
                'origin': 'http://www.douban.com'}
        self.session=requests.Session()
        self.session.headers.update(headers)


    def login(self,username,password,
              source=None,
              redir='http://www.douban.com/',
              login='登录'):
        url='https://www.douban.com/accounts/login'
        r=self.session.get(url)
        (captcha_id,captcha_url)= _get_captcha(r.content)
        if captcha_id:
            captcha_solution=raw_input('please input solution for [%s]:' %captcha_url)

        data={'form_email': username,
              'form_password': password,
              'source': source,
              'redir': redir,
              'login': login}
        if captcha_id:
            data['captcha-id'] =captcha_id
            data['captcha-solution'] =captcha_solution
        headers={'refer': 'https://www.douban.com/accounts/login',
                 'host': 'accounts.douban.com'}
        r=self.session.post(url, data=data, headers=headers)
        print(self.session.cookies.items())



    def edit_signature(self,username,signature):
        url = 'https://www.douban.com/people/%s/' % username
        r = self.session.get(url)
        # print(r.content)

        # ck = _get_ck(r.content)
        ck = _get_myck(r.content)
        ################################这里还有严重的问题，我没办法找到ck的值#############################
        # ck='y8Rg'
        url = 'https://www.douban.com/j/people/%s/edit_signature' % username
        headers = {'refer': url,
                   'host': 'www.douban.com',
                   'x-requested-with': 'XMLHttpRequest'}
        data = {'ck': ck, 'signature': signature}
        r = self.session.post(url, data=data, headers=headers)
        print(r.content)



def _attr(attrs,attrname):
    for attr in attrs:
        if attr[0]==attrname:
            return attr[1]
    return None

def _get_captcha(content):
    class CaptchaParser(HTMLParser):
        def __init__(self):
            HTMLParser.__init__(self)
            self.captcha_id=None
            self.captcha_url=None

        def handle_starttag(self, tag, attrs):
            if tag=='input' and _attr(attrs,'type')=='hidden' and _attr(attrs,'name')=='captcha-id':
                self.captcha_id=_attr(attrs,'value')
            if tag=='img' and _attr(attrs,'id') == 'captcha_image' and _attr(attrs,'class')=='captcha_image':
                self.captcha_url=_attr(attrs,'src')
    p=CaptchaParser()
    p.feed(content)
    return p.captcha_id, p.captcha_url


##################我自己瞎写的方法####################################################################

def _get_myck(content):
    class CKSearch(HTMLParser):
        def __init__(self):
            HTMLParser.__init__(self)
            self.ck=None


        def handle_starttag(self, tag, attrs):
            if tag=='input' and _attr(attrs,'type')=='hidden' and _attr(attrs,'name')=='ck':
                self.ck=_attr(attrs,'value')

    p=CKSearch()
    p.feed(content)
    return p.ck



###################################################################################################






def _get_ck(content):

    class CKParser(HTMLParser):
        def __init__(self):
            HTMLParser.__init__(self)
            self.ck = None

        def handle_starttag(self, tag, attrs):
            if tag=='input' and _attr(attrs, 'type') == 'hidden' and _attr(attrs,'name') == 'ck':
                self.ck = _attr(attrs, 'value')

    p = CKParser()
    p.feed(content)
    return p.ck

if __name__=='__main__':
    c=DoubanClient()
    c.login('ckx1025ckx@163.com', '19951025a')
    c.edit_signature('brainlink', '999999933333222234999')
