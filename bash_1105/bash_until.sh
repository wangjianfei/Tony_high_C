#!/bin/bash

export PATH

until [ "$yn" == "yes" ] || [ "$yn" == "YES" ]  #知道输入yes or YES 才退出
do
    read -p "Please input yes/YES to stop this program:" yn
done
