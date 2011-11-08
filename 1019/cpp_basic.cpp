#include <iostream>

using namespace std;

/*&a 当前面有类型符时，它必然是对引用的声明，如果前面没有类型符，此时的&是
 * 取地址符*/
void swap(int &a,int &b)//&a是引用类型
{
    int temp ;
    temp = a;
    a = b;
    b = temp;
}

int main(int argc, const char *argv[])
{
    int x = 3;
    int y = 5;
    int &my_int = x;
    cout<<&my_int<<endl<<&x<<endl;//两个地址一样
    swap(x,y);
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    return 0;
}


