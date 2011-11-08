#include <iostream>
using namespace std;

template <class numtype>

class Compare
{
public:
    Compare(numtype a,numtype b)
    {
        x = a;
        y = b;
    }
    numtype max()
    {
        return (x>y)?x:y;
    }
    numtype min()
    {
        return (x<y)?x:y;
    }
private:
    numtype x;
    numtype y;
};

int main(int argc, const char *argv[])
{
    Compare <int> cmp1(3,7);
    cout<<cmp1.max()<<" is the Maximum of two integer numbers" <<endl;
    cout<<cmp1.min()<<" is the Minimum of two integer numbers" <<endl;
    Compare<float>cmp2(3.12,7.56);
    cout<<cmp2.max()<<" is the Maximum of two float numbers" <<endl;
    cout<<cmp2.min()<<" is the Minimum of two float numbers" <<endl;


    return 0;
}

