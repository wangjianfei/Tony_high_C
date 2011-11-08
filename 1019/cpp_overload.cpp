#include <iostream>

using namespace std;

class point
{
public:
  //  point()  /*两者不能共存*/
  //  {}
    point(int x = 0,int y = 3)
    {
        this->x = x;
        this->y = y;
    }
    ~point()
    {}
    void show()
    {
        cout<<"num.x = "<<x<<endl<<"num.y = "<<y<<endl;
    }
private:
    int x;
    int y;
  //  char *p;
};


int main(int argc, const char *argv[])
{
    point num;
    num.show();
    return 0;
}

