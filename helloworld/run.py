'''
'''
import os
import shutil

dir_path = os.getcwd()

if __name__ == '__main__':
    print(dir_path)
    if os.path.isdir(dir_path + '\\build'):
        shutil.rmtree(dir_path + '\\build')
    else:
        print('文件夹不存在')