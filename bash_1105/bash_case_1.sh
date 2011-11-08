#!/bin/bash

#Progarm:
#       Let user input one two three and show in screen

#History:

export PATH

echo "This program will print your selection!"

case $1 in  #$1 是从命令行输出来的
    "one")
        echo "Your choice is ONE"
        ;;  #相当于break；
     "two")
        echo "Your choice is two"
        ;;
     "three")
        echo "Your choice is three"
        ;;
        *)
        echo "usage {one|two|three}"
        ;;
esac  #case 和esac必须配对使用

