#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    int a,b,sum;
    cout<<"please input a: \n";
    cin>>a;
/*"<<"是插入运算符  ">>"是提取预算符  在C++中输入输出都是运算符 不是函数*/
    cout<<"please input b: \n";
    cin>>b;
//    cin>>a>>b;//在shell终端输入两个数时  可以用空格隔开 一次性输入

    sum = a+b;
    cout<<"sum = "<<sum<<endl;
    return 0;
}

