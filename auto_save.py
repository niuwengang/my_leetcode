#-- coding:UTF-8 --
import os
import sys

class bcolor(object):
    HEADER = '\033[95m'
    OKBLUE = '\033[94m'
    OKGREEN = '\033[92m'
    WARNING = '\033[93m'
    FAIL = '\033[91m'
    ENDC = '\033[0m'



if __name__ == '__main__':

    param_num=len(sys.argv)
    # print(param_num)
    write_log="update"
    if param_num>=2 :
        write_log = sys.argv[1]
    os.system('git add .')
    os.system('git commit -m %s' % (write_log))
    print( bcolor.OKBLUE+ 'push 修改为:'+write_log + bcolor.ENDC)
    os.system('git push')

