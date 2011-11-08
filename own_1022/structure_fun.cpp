#include <iostream>
using namespace std;

class Box
{
public:
    Box(int h = 10 ,int w = 10,int len = 10):height(h),width(w),length(len){}
    int volume();
private:
    int height;
    int width;
    int length;
};

/*Box::Box(int h,int w,int len)
{
    height = h;
    width = w;
    length = len;
}*/

/*Box::Box(int h,int w,int len):height(h),width(w),length(len)
{}*/

int Box::volume()
{
    return(height*width*length);
}

int main(int argc, const char *argv[])
{
    Box box1;   
    cout<<"The volume of box1 is  "<<box1.volume()<<endl;
    Box box2(15,30,21);
    cout<<"The volume of box2 is  "<<box2.volume()<<endl;
    return 0;
}

