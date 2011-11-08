#!/bin/bash
#Program:
#       Let user leyin their first and last name,and show their full name
#History:
#2011/11/06
PATH=/bin:/sbin:/usr/bin:/usr/sbin:/usr/local/bin:/usr/local/sbin:~/bin
export PATH

read -p "Please input your first name:" firstname

read -p "Please input your last name:"  lastname

echo -e "\nYour full name is: $firstname $lastname"
