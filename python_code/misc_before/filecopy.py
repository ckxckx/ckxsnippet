# -*- coding: utf-8 -*-
import os
import os.path
import shutil
rootdir=r'D:\data'
goal=r'D:\1\meme'
for parent,dirnames,filenames in os.walk(rootdir):
    for filename in filenames:
        path=parent+"\\"+filename
        if os.path.exists(r'D:\1')==False:
            os.makedirs(r'D:\1')
        if parent ==r'D:\data\1001':
            print path
            goal=goal+filename
            shutil.copyfile(path,goal)
#要注意的地方在于python的编码问题，文本文件反斜线，单引号前加r表示不转义；
#shutil.copyfile的原地址和目录地址得是包含文件的全名，而不是所在目录，这个用法和cp命令是一样的；
#for 。。。 os里面只需要嵌套一个for filename即可，我比较懒，封装好的库拿来就照用了，不了解怎么实现；
#这样写不会出现空白