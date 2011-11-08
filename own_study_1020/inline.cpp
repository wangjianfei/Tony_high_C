#include <iostream>
using namespace std;

#define power(x) (x)*(x)

//#define power(x) x*x

/*注意：宏定义的定义和使用*/

/*注意：内置函数 与宏定义的区别:都可以置换 但内置函数优于代参宏定义 同样不
 * 会出现代参宏定义的副作用*/
/*inline int power(int x)
{
    return (x*x);
}*/

double a = 13.5;

int main(int argc, const char *argv[])
{
    int a = 5;
    cout<<"a = "<<a<<endl;//输出局部变量a
    cout<<"a = "<<::a<<endl;//输出全局变量a

    /*"::a"表示全局作用域的a; "::"不能访问函数中的局部变量*/

    cout<<power(2)<<endl;
    cout<<power(1+1)<<endl;
    return 0;
}

