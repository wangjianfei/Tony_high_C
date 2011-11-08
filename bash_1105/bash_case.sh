#!/bin/bash

#Programe:
#        This program will show the user choice

export PATH

read -p "Please input (Y/N) :" yn #变量名是yn 双引号之间是提示符

if [ "$yn" == "Y" ] ||  [ "$yn" == "y" ] #方括号中的两边必须各加一个空格
then
    echo "OK,continue"·
    exit 0
fi
if [ "$yn" == "N" ] ||  [ "$yn" == "n" ]
then 
    echo "Oh,interrupt!"
    exit 0
fi
echo "I do not know what is your choise" && exit 0

