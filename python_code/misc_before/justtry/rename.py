# -*- coding: utf-8 -*-
import os
import hashlib
change=hashlib.md5()
change.update("14051174.jpg")
output = change.hexdigest()
print output



# os.rename('jjj.py','ggg.py')