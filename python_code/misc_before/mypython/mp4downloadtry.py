# -*- coding: utf-8 -*-
# http://ocs1.maiziedu.com/pcjc/pcjc-18.mp4
import requests
def _down_load():
    url='http://ocs1.maiziedu.com/pcjc/pcjc-18.mp4'
    r=requests.get(url)
    fname=url.split('/')[-1]
    with open('%s' % fname, 'wb') as f:
        f.write(r.content)




if __name__ == '__main__':
    _down_load()