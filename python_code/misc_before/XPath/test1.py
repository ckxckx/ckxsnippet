# -*- coding: utf-8 -*-
from lxml import etree
html='''
<html>
<body>

<h1>My First Heading</h1>

<p>My first paragraph.</p>

</body>
</html>
'''

selector=etree.HTML(html)
content=selector.xpath('//h1/text()')
print content

