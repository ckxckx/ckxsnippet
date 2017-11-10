# -*- coding: utf-8 -*-
import xlsxwriter

workbook = xlsxwriter.Workbook('demo.xlsx')
ws = workbook.add_worksheet(name='first')
for row in range(10):
    ws.write(row,0,r'my num is %d' %row)

workbook.close()