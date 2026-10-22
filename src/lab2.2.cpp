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
int main()
{
    std::cout << "初始点数：" << CPoint::GetCount() << '\n';

    {
        //1.默认构造
        CLine line1;

        //2.四个坐标构造
        CLine line2(1, 2, 4, 6);

        //3.两个点构造
        CPoint a(0, 0);
        CPoint b(3, 4);
        CLine line3(a, b);

        std::cout << "line1：\n";
        line1.ShowLine();
        std::cout << "长度：" << line1.Distance() << '\n';

        std::cout << "line2：\n";
        line2.ShowLine();
        std::cout << "长度：" << line2.Distance() << '\n';

        std::cout << "line3：\n";
        line3.ShowLine();
        std::cout << "长度：" << line3.Distance() << '\n';

        //4.验证断电修改
        a.SetX(100);
        std::cout << "修改原点a后，line3：\n";
        line3.ShowLine();

        std::cout << "当前点数："
                  << CPoint::GetCount() << '\n';
    }

    std::cout << "作用域结束后的点数："
              << CPoint::GetCount() << '\n';

    return 0;
}