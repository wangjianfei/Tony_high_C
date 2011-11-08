#!/bin/bash

if [ -e file.c ];then  #如果一行有多个命令 要用分号隔开
    rm -rf file.c
else
    touch file.c
fi

exit 0
