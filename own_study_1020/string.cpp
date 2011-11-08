#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(int argc, const char *argv[])
{
/*三个字符串比较大小和三个正数比较大小的算法一模一样*/
    string string1,string2,string3,temp;
    cout<<"Please input string1 :"<<endl;
    cin>>string1;
    cout<<"Please input string2 :"<<endl;
    cin>>string2;
    cout<<"Please input string3 :"<<endl;
    cin>>string3;
    if(string1 > string2)
    {
        temp = string1;
        string1 = string2;
        string2 = temp;
    }
    if(string1 > string3)
    {
        temp = string1;
        string1 = string3;
        string3 = temp;
    }
    if(string2 >string3)
    {
        temp = string2;
        string2 = string3;
        string3 = temp;
    }
    cout<<"min is "<<string1<<endl;
    cout<<"mid is "<<string2<<endl;
    cout<<"max is "<<string3<<endl;

  /*  string string1;
    string string2; 
    string1 = "china";
    string2 = "abcdef";
    int len;
    while(string)
    cout<<"len = "<<len<<endl;
  //  string2 =string1;
  //  len = sizeof(string2);
  //  cout<<"len = "<<len<<endl;
    cout<<"string1 = "<<string1<<endl;
    cout<<"string2 = "<<string2<<endl;*/
    return 0;
}

