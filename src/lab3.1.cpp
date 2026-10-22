//实验三：问题1 空间中的点
#include<iostream>
#include "CPoint.h"
class CThreePoint:public CPoint
{
private:
    int z;
public:
    CThreePoint();
    CThreePoint(int, int, int);
    int GetZ();
    void SetZ(int pz);
    virtual void ShowPoint();
};
////默认构造
CThreePoint::CThreePoint()
{
    CPoint();
    z=0;
}
////构造二
CThreePoint::CThreePoint(int px, int py, int pz)
{
    CPoint(px,py);
    z=pz;
}
int CThreePoint::GetZ()
{
    return z;
}
void CThreePoint::SetZ(int pz)
{
    z=pz;
}
