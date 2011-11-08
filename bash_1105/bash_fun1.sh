#!/bin/bash

export PATH

function printit()
{
    echo -n "Your choice is $1"
}

echo "this program will print your selection"

case $1 in
    "one")
        printit 1  #printit 是$0 1 是$1 也就是函数的参数
        ;;
    "two")
        printit 2
        ;;
    "three")
        printit 3
        ;;
    *)
        echo "usage {one|two|three}"
        ;;
esac


