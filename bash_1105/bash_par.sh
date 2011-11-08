#!/bin/bash

#.sh程序的执行方法:
#1、sh bash_par.sh
#2、chmod 777 bash_par.sh 修改权限，让其具有可执权限
#之后  ./bash_par.sh  后面可以继续加上参数

if [ -e $1 ]  #就是传参 ./bash_par.sh 是 $0 之后是 $1 可以一直加  当超过9
              #就写成${10}
              #[ -e filename ] == test -e fielname 是查看文件是否存在 在
              #用 echo $? 返回0表示存在,返回1表示不存在
then
    rm -rf $1
else 
    touch $1
fi
