#!/bin/bash     #每个bash程序都必须写  除这行之外，之后每个“#“都代表注释

echo 'taiyuan'
echo "$USER"   #输出用户名称 用的是双个引号 代表输出所指内容
echo '$USER'   #输出字符窗 用的是单引号 
echo `date +%m%d`  #指令执行的结果让echo输出
