#ifndef _HEADER2_H_
#define _HEADER2_H_

#include <string>
using namespace std;

namespace ns2
{
   class Student;
}
using namespace ns2;
class ns2::Student
{
public:
    Student(int n,string nam,char s);
    void get_data();
private:
    int num;
    string name;
    char sex;
};

#endif
