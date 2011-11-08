#!/bin/bash

export PATH

function printit()
{
    echo -n "Your choice is"
}

echo "this program will print your selection"

case $1 in
    "one")
        printit;echo $1
        ;;
    "two")
        printit;echo $1
        ;;
    "three")
        printit;echo $1
        ;;
    *)
        echo "usage {one|two|three}"
        ;;
esac


