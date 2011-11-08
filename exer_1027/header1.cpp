#include <iostream>
#include "header1.h"
using namespace std;
using namespace ns1;

ns1::Student::Student(int n,string nam,int a)
{
    num = n;
    name = nam;
    age = a;
}

void ns1::Student::get_data()
{
    cout<<num<<""<<name<<""<<age<<endl;
}
