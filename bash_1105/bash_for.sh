#!/bin/bash

export PATH

s=0 #初始化一个变量

for (( i=1; i<= 100; i++)) #for循环
do
    s=$(($s+$i))
done
# do 和 done 相当于for的大括号
echo "The result of '1+2+3+...+100' ==> $s"
