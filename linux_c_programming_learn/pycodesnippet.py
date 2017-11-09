#/bin/python
#coding:utf-8
#循环位移，逻辑位移的话通过比例然后与0xfff...相与运算即可。。。
ror = lambda val, r_bits, max_bits: \
        ((val & (2**max_bits-1)) >> r_bits%max_bits) | \
        (val << (max_bits-(r_bits%max_bits)) & (2**max_bits-1))
                  
rol = lambda val, r_bits, max_bits: \
        (val << r_bits%max_bits) & (2**max_bits-1) | \
        ((val & (2**max_bits-1)) >> (max_bits-(r_bits%max_bits)))

