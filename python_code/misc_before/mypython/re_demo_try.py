# -*- coding: utf-8 -*-
import re

def demo():
    print re.search(r'.*\n.*','abc\ndef').group()


if __name__ == '__main__':
    demo()
