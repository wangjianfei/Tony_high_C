#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    int max(int a,int b);
    int a,b,c;
    cout<<"please input a :\n";
    cin>>a;
    cout<<"please input b :\n";
    cin>>b;
    c = max(a,b);
    cout<<"c = "<<c<<endl;

    return 0;
}

int max(int a,int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

