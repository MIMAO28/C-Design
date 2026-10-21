//实验二：问题2：CLine类
#include<iostream>
#include<cmath>
#include "CPoint.h"
class CLine
{
private:
    CPoint pt1, pt2;  //pt1和pt2分别代表该线段的起点和终点
public:
    CLine();
    CLine(int x1,int y1,int x2,int y2);
    CLine(CPoint p1,CPoint p2);
    double Distance();  //计算该线段长度的成员函数
    void ShowLine();
};

////默认构造
CLine::CLine() :pt1(),pt2() {}
////构造二
CLine::CLine(int x1,int y1,int x2,int y2)
{
    pt1.SetX(x1);
    pt1.SetY(y1);
    pt2.SetX(x2);
    pt2.SetY(y2);
}
////构造三
CLine::CLine(CPoint p1,CPoint p2)
{
    pt1=p1;
    pt2=p2;
}

void CLine::ShowLine()
{
    std::cout<<"begin:";
    pt1.ShowPoint();
    std::cout<<"end:";
    pt2.ShowPoint();
}

double CLine::Distance()
{
    double dx=pt1.GetX()-pt2.GetX();
    double dy=pt1.GetY()-pt2.GetY();
    return sqrt(dx*dx+dy*dy);
}
int main(void)
{
    CLine line1;
    CLine line2(1,2,4,6);
    CPoint a(0,0);
    CPoint b(3,4);
    CLine line3(a,b);
    line1.ShowLine();
    std::cout<<"line1_length:"<<line1.Distance()<<std::endl;
    line2.ShowLine();
    std::cout<<"line2_length:"<<line2.Distance()<<std::endl;
    line3.ShowLine();
    std::cout<<"line3_length:"<<line3.Distance()<<std::endl;
    return 0;

}