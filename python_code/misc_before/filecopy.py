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
#Ҫע��ĵط�����python�ı������⣬�ı��ļ���б�ߣ�������ǰ��r��ʾ��ת�壻
#shutil.copyfile��ԭ��ַ��Ŀ¼��ַ���ǰ����ļ���ȫ��������������Ŀ¼������÷���cp������һ���ģ�
#for ������ os����ֻ��ҪǶ��һ��for filename���ɣ��ұȽ�������װ�õĿ������������ˣ����˽���ôʵ�֣�
#����д������ֿհ�