/*程序未写完*/
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float area() const {return 0.0;}
    virtual float volume() const {return 0.0;}
    virtual void shapeName() const = 0;
};

class Point:public Shape
{
public:
    Point(float = 0,float = 0);
    void setPoint(float,float);
    float getX() const {return x;}
    float getY() const {return y;}
    virtual void shapeName() const {cout<<"Point:";}
    friend ostream &operator<<(ostream &,const Point &);
protected:
    float x,y;
};

Point::Point(float a,float b)
{
    x = a;
    y = b;
}

void Point::setPoint(float a,float b)
{
    x = a;
    y = b;
}

ostream & operator<<(ostream &output,const Point &p)
{
    output<<"["<<p.x<<","<<p.y<<"]";
    return output;
}

class Circle:public point
{
public:
    Circle(float x = 0,float y = 0,float r = 0);
    void setRadius(float);
    float getRadius() const;
    virtual float area() const;
    virtual void shapeName() const {cout<<"Circle:";}
    friend ostream &operator<<(ostream &,const Circle &);
private:
    float radius
};

Circle::Circle(float x,float y,float r):Point(x,y),radius(r){}

void Circle::getRaius() const {return radius;}

float Circle::area() const {return 3.14159*radius*radius;}

ostream &operator<<(ostream &output,const Circle &c)
{
    output<<"["<<c.x<<","<<c.y<<"] , r ="<<c.radius;
    return output;
}

























