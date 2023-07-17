#!/usr/bin/python
# -*- coding: UTF-8 -*-
import sys
import os
write_log='-a'
# os.system('ls '+write_log)
if __name__ == '__main__':
    param_num=len(sys.argv)
    print(param_num)
    if param_num == 2 :
        write_log = sys.argv[1]
        print(write_log)

# import time
 
# # 格式化成2016-03-20 11:45:39形式
# print time.strftime("%Y-%m-%d %H:%M:%S", time.localtime()) 
 
# # 格式化成Sat Mar 28 22:24:24 2016形式
# print time.strftime("%a %b %d %H:%M:%S %Y", time.localtime()) 
  
# # 将格式字符串转换为时间戳
# a = "Sat Mar 28 22:24:24 2016"
# print time.mktime(time.strptime(a,"%a %b %d %H:%M:%S %Y"))