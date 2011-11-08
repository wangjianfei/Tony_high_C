#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;
/*在一些C++编译系统中可以支持iostream.h 但不能再写命名空间 在一些新的C++
 * 编译系统中不支持 在使用时应该进行test*/
int main(int argc, const char *argv[])
{
    int a = 5;
    int b = 13;
    int c = 7;
    cout<<"This is a c++ program"<<"\n";//endl;
    /*"<<"是插入的意思 是将This is a c++ program 插入到输出队列*/
    printf("This is a c++ program\n");//C++和C兼容  
    cout<<"a"<<setw(5)<<a<<endl<<"b"<<setw(5)<<b<<endl<<"c"<<setw(5)<<c<<endl;
    return 0;
}

