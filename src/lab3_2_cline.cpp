//实验三：问题2.画线段
#include "Shape.h"
#include<iostream>
#include "CPoint.h"
class Cline:public Shape
{
private:
    CPoint pt1,pt2;
public:
    Cline(ColorType c,int x1,int y1,int x2,int y2);
    virtual void draw();
};
Cline::Cline(ColorType c,int x1,int y1,int x2,int y2):Shape(c)
{
    pt1.SetX(x1);
    pt1.SetY(y1);
    pt2.SetX(x2);
    pt2.SetY(y2);
}
void Cline::draw()
{
    std::cout<<"This is a line"<<std::endl;
    std::cout<<"Start: ";
    pt1.ShowPoint();
    std::cout<<"End: ";
    pt2.ShowPoint();
}
int main(void)
{
    Shape shape(Red);
    Cline line(Red,1,2,3,4);
    Shape *ptr=&shape;
    ptr->draw();
    ptr=&line;
    ptr->draw();
    return 0;
}