#ifndef _HEADER1_H_
#define _HEADER1_H_
#include <cstring>
#include <string>
using namespace std;

namespace ns1
{
    class Student;
}
using namespace ns1;

class ns1::Student
{
public:
    Student(int n,string nam,int a);
    void get_data();
private:
    int num;
    string name;
    int age;
};

#endif
