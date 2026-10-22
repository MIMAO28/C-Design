//lab3.2演示类
#include <iostream>
#include "Shape.h"
class Circle:public Shape
{
private:
    double r;
public:
    virtual void draw();
    Circle(ColorType c,double r);
};
Circle::Circle(ColorType c,double dr):Shape(c)
{
    r=dr;
}
void Circle::draw()
{
    std::cout<<"This is a Circle"<<std::endl;
}
int main()
{
    Shape shape(Red);
    Circle circle(Red,5);

    Shape* ptr=&shape;
    ptr->draw();      //执行Shape::draw()

    ptr=&circle;
    ptr->draw();      //执行Circle::draw()
}