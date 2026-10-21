//实验二 问题1：完成CPoint成员函数
#include<iostream>
class CPoint
{
private:
    int x,y;
    static int nCount;//声明，未分配内存
public:
    CPoint(int px=0,int py=0);
    CPoint(CPoint&);
    ~CPoint();
    int GetX();
    int GetY();
    void SetX(int);
    void SetY(int);
    void ShowPoint();
};
int CPoint::nCount=0;
////构造函数同名无返回值
CPoint::CPoint(int px,int py) :x(px),y(py)
{
    nCount++;
    std::cout<<"point_num"<<nCount<<std::endl;
}
//接受px,py传输给x,y
int CPoint::GetX()
{
    return x;
}
int CPoint::GetY()
{
    return y;
}
void CPoint::SetX(int px)
{
    x=px;
}
void CPoint::SetY(int py)
{
    y=py;
}
////拷贝构造函数
CPoint::CPoint(CPoint& p) :x(p.GetX()),y(p.GetY())
{
    nCount++;
    std::cout<<"point_num："<<nCount<<std::endl;
}
////析构函数
CPoint::~CPoint()
{
    --nCount;
    std::cout<<"point_num："<<nCount<<std::endl;
}

void CPoint::ShowPoint()
{
    std::cout<<this->GetX()<<' '<<this->GetY()<<std::endl;
}
int main()
{
    CPoint p1(3, 5);//创建对象：计数变为1

    {
        CPoint p2(p1);//拷贝创建对象：计数变为2

        CPoint* ptr = &p1;//指针指向已有对象p1
        CPoint& ref = p1; //引用是已有对象p1的别名

        ptr->SetX(8);
        ref.SetY(9);

        p1.ShowPoint();
        p2.ShowPoint();
    }//p2析构：计数变为1
    p1.ShowPoint();
    return 0;
}//p1析构：计数变为0