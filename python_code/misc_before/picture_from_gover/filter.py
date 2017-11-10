# -*- coding: utf-8 -*-
import os
import  os.path
import shutil
rootdir = r'D:/picturebysteal'

fp=file('D:/wamp/www/idpic.txt','w')

def run():
    i=1
    # os.mkdir(r'D:/wamp/www/idpic')
    #遍历目录下的文件，父目录到子目录和文件，由目录树的根部开始索引目录，然后按照顺序再以子目录中的
    #另外一个节点为父目录，按照顺序依次下去，然后可以把所有文件筛出来了
    for parent, dirnames, filenames in os.walk(rootdir):
        # print '||||||'
        # print parent
        # print '||||||'
        # print dirnames
        # print '||||||'
        # print filenames
        print parent
        for file in filenames:
            path = parent+"\\"+ file
            num=str(i)
            goal = num+'|||'+'D:/wamp/www/idpic/' + file +'\n'
            # print goal
            i=i+1
            fp.write(goal)
            # print path
            # if os.path.getsize(path) == 2474:
            #     print file
            #     os.remove(path)
            # shutil.copyfile(path,goal)
#




if __name__ == '__main__':
    run()
    fp.close()