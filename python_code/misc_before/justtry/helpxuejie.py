# -*- coding: utf-8 -*-
import os
import os.path
import shutil
rootdir=r'D:\data'
goal=r'D:\1\meme'
#filenames=os.listdir('E:\\get_file')
for parent,dirnames,filenames in os.walk(rootdir):
    print '++++++++++++++++++'
    # print parent
    print '*******************'
   # parent_s == r'D:\data\1001':
    ####################################
    for filename in filenames:
        path=parent+"\\"+filename
####################创建目标目录####################
        if os.path.exists(r'D:\1')==False:
            os.makedirs(r'D:\1')
        if parent ==r'D:\data\1001':
            print path
            goal=goal+filename
            shutil.copyfile(path,goal)



# goal='E:\1'
# shutil.copyfile(path,goal)
