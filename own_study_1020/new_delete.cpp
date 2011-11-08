#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int num;
    char sex;
};

int main(int argc, const char *argv[])
{
  Student *p;
  p = new Student;
  p->name = "Wangjianfei";
  p->num = 10123;
  p->sex ='M' ;
  cout<<"p->name is "<<p->name<<endl;
  cout<<"p->num is "<<p->num<<endl;
  cout<<"p->sex is "<<p->sex<<endl;
  delete p;
    return 0;
}

