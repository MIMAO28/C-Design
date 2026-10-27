//实验三：问题1 空间中的点
#include<iostream>
#include "CPoint.h"
class CThreePoint:public CPoint//继承
{
private:
    int z;
public:
    CThreePoint();
    CThreePoint(int, int, int);
    int GetZ();
    void SetZ(int pz);
    virtual void ShowPoint();//根据实际对象类型选择对应版本函数
};
////默认构造
CThreePoint::CThreePoint()
{
    z=0;
}
////构造二
CThreePoint::CThreePoint(int px, int py, int pz)
{
    SetX(px);
    SetY(py);
    z=pz;
    //三维点构造函数体
}
int CThreePoint::GetZ()
{
    return z;
}
void CThreePoint::SetZ(int pz)
{
    z=pz;
}
void CThreePoint::ShowPoint()
{
    std::cout<<'('<<this->GetX()<<", "<<this->GetY()<<", "<<this->GetZ()<<')'<<std::endl;
}

int main()
{
    CThreePoint p(3,4,5);
    CPoint* ptr=&p;//公有继承

    p.ShowPoint();
    ptr->ShowPoint();//基类函数是虚函数

    return 0;
}
// int main()
// {
//     {
//         CThreePoint p(3,4,5);
//         p.ShowPoint();
//         CPoint* ptr=&p;
//         ptr->ShowPoint();
//     } //在这里自动析构p
//
//     return 0;
// }