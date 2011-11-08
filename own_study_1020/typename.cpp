/*模板函数比函数重载更方便 但应注意它只使用与函数的参数个数相同而类型不同
 * 且函数体相同的情况 如果参数个数不同  则不能用函数模板*/
#include <iostream>

using namespace std;

template <typename T,typename T1,typename T2>//注意：不能写分号
/*上面是模板声明 其中Ｔ T1 T2 是类型参数　不是语句  所以后面不能有分号 
 * 一个typename 后面只能声明一个参数变量　要声明多个可以如上*/

T add(T a,T1 b,T2 c)
/*如上所示：三个类型参数都不一样　所以可以用不同的值初始化
 * 当然从上面可以知道　返回值和第一个形参的类型一样　要注意
 * 　可以用不同的值初始化　不是可以用任意值初始化*/
{
    return (a+b+c);
}

int main(int argc, const char *argv[])
{
    cout<<add(1,2,2.3)<<endl;
    cout<<add(2,2.3,3)<<endl;
    return 0;
}


