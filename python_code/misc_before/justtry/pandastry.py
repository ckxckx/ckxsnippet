# -*- coding: utf-8 -*-


import pandas as pd

df = pd.DataFrame({ 'A' : 1. ,

'B' : pd.Timestamp( '20130102' ),

'C' : pd.Series( , index = list ( range ( )), dtype = 'float32' ),

'D' : pd.Series([ , , , ], dtype = 'int32' ),

'E' : pd.Categorical([ "test" , "train" , "test" , "train" ]),

'F' : 'foo' })

