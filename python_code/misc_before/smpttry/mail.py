# -*- coding: utf-8 -*-
import poplib
import smtplib
from email.header import decode_header
from email.mime.text import MIMEText
import email



sent=smtplib.SMTP('smtp.sina.com')
sent.login('ckx1025ckx@sina.com','19951025a')


to = ['765885894@qq.com', 'ckx1025ckx@163.com']
content = MIMEText('hello ckx')
content['Subject'] = 'mytest'
content['To'] = ','.join(to)
sent.sendmail('ckx1025ckx@sina.com', to, content.as_string())
print(content)
print sent
print content.as_string()
sent.close()