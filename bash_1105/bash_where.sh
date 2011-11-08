#!/bin/bash

export PATH

s=0
i=0

while [ "$i" != "100" ]  #死循环时，写上‘：’
do
    i=$(($i+1))
    s=$(($s+$i))
done

echo "the result of '1+2+3+...+100' is ==> $s"  

