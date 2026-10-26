//lab3.2演示类
#include <iostream>
#include "Shape.h"
#include "CPoint.h"
class Circle:public Shape
{
private:
    CPoint center;
    double r;
public:
    virtual void draw();
    Circle(ColorType c,int x,int y,double r);
};
Circle::Circle(ColorType c,int x,int y,double dr):Shape(c)
{
    center.SetX(x);
    center.SetY(y);
    r=dr;
}
void Circle::draw()
{
    std::cout<<"This is a Circle"<<std::endl;
    std::cout<<"center:";
    center.ShowPoint();
    std::cout<<"radius:"<<r<<std::endl;
}
int main()
{
    Shape shape(Red);
    Circle circle(Red,3,4,5);

    Shape* ptr=&shape;
    ptr->draw();      //执行Shape::draw()

    ptr=&circle;
    ptr->draw();      //执行Circle::draw()
}