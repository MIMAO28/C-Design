//实验三：画图形
#include <iostream>
enum ColorType{White,Black,Red,Green,Blue,Yellow,Magenta,Cyan};
class Shape
{
protected:
    ColorType color;

public:
    Shape(ColorType c);
    virtual void draw();
    //不同图形提供各自的绘制函数，之后通过基类指针调用
};
Shape::Shape(ColorType c)
{
    color = c;
}
void Shape::draw()
{
    std::cout<<"This is a shape"<<std::endl;
}