#include <iostream>
using namespace std;

class Ccomplex
{
public:
    Ccomplex(double r = 0,double i = 1)
    {
        real = r;
        imag = i;
    }
    Ccomplex operator+(Ccomplex &c)
    {
        Ccomplex tem;
        tem.real = real+c.real;
        tem.imag = imag+c.imag;
        return tem;
    }
    Ccomplex operator+(double r)
    {
        Ccomplex tem;
        tem.real = real+r;
        tem.imag = imag;
        return tem;
    }
    void print()
    {
        cout<<"complex is :"<<endl;
        cout<<real<<"  +  "<<imag<<"i"<<endl;
    }
private:
    double real;
    double imag;
};

int main(int argc, const char *argv[])
{
    Ccomplex c1(5,10),c2(12,6),c;
    c = c1+c2;
    c.print();
    c = c1+10;
    c.print();
    return 0;
}

