# -*- coding: utf-8 -*-
import threading
import random
from time import sleep
def yunxing(i):
    print("sleep start %d" % i)
    st=random.randint(1,6)
    sleep(st)
    print "sleeper %d wakeup after %d seconds" % (i,st)
for i in range(4):
    threading.Thread(target=yunxing,args=(i,)).start()
# 注意，千万注意target=后面的函数不要加括号，这样start才有用，这个多线程用起来很方便

