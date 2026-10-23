//实验3：问题2.画矩形
#include "Shape.h"
#include <iostream>
#include "CPoint.h"
class Rectangle:public Shape
{
private:
    CPoint pt;//左下角
    double length;
    double width;
public:
    virtual void draw();
    Rectangle(ColorType c,int x,int y,double length,double width);
};
Rectangle::Rectangle(ColorType c,int x,int y,double length,double width):Shape(c)
{
    pt.SetX(x);
    pt.SetY(y);
    this->length=length;
    this->width=width;
}
void Rectangle::draw()
{
    std::cout<<"This is a Rectangle"<<std::endl;
    std::cout<<"Position:"<<pt.GetX()<<" "<<pt.GetY()<<std::endl;
    std::cout<<"Length Width:"<<length<<' '<<width<<std::endl;
}
int main()
{
    Shape shape(Red);
    Rectangle rectangle(Red,1,2,5,3);

    Shape* ptr=&shape;
    ptr->draw();      //执行Shape::draw()

    ptr=&rectangle;
    ptr->draw();      //执行Rectangle::draw()
}
