#include <iostream>
#include "header1.h"
#include "header2.h"
using namespace std;

int main(int argc, char *argv[])
{
    ns1::Student stud1(101,"wang",18);
    stud1.get_data();
    ns2::Student stud2(101,"wang",'m');
    stud2.get_data();
    return 0;
}

