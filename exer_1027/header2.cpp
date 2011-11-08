#include <iostream>
#include"header2.h"
using namespace std;
using namespace ns2;

Student::Student(int n,string nam,char s)
{
    num = n;
    name = nam;
    sex = s;
}

void Student::get_data()
{
    cout<<num<<""<<name<<""<<sex<<endl;
}
