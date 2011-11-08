#include <iostream>
using namespace std;
/*显示实例化*/
template<typename T1,typename T2,int a>

T1 sum(T1 x,T2 y)
{
    return (a+x+y);
}

int main(int argc, const char *argv[])
{
    cout<<sum<int ,char,3>(2,'a')<<endl;
    cout<<sum<int ,int ,3>(2, 3 )<<endl;
    cout<<sum<char ,int,3>('a',3)<<endl;
    cout<<sum<double,int,3>(3.2,3)<<endl;
    return 0;
}
/*
template <typename T1,typename T2>
//隐式实例化
T1 sum(T1 x,T2 y)
{
    return (x+y);
}

int main(int argc, const char *argv[])
{
    cout<<"sum(1,2) = "<<sum(1,2)<<endl;
    cout<<"sum('a',3) = "<<sum('a',3)<<endl;
    cout<<"sum(3,'a') = "<<sum(3,'a')<<endl;
    cout<<"sum(3.2,3) = "<<sum(3.2,3)<<endl;
    cout<<"sum(3,3.2) = "<<sum(3,3.2)<<endl;
    return 0;
}*/











