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
    static int GetCount()
    {return nCount;}

    CPoint operator+(CPoint pt);
    CPoint operator-(CPoint pt);
};

std::ostream& operator<<(std::ostream& out,CPoint pt)
{
    out<<'('<<pt.GetX()<<','<<pt.GetY()<<')';
    return out;
}
//operator<<(std::cout, p)本质为一次函数调用，由关键字operator+要重载的运算符组成，返回一个输出流的引用用于连续输出入
std::istream& operator>>(std::istream& in,CPoint &pt)
{
    int px,py;
    if (in>>px>>py)
    {
        pt.SetX(px);
        pt.SetY(py);
    }
    return in;
}
int CPoint::nCount=0;
////构造函数同名无返回值
CPoint::CPoint(int px,int py)
{
    x=px;
    y=py;
    ++nCount;
    //点构造，当前点数
}

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
CPoint::CPoint(CPoint& p)
{
    x=p.GetX();
    y=p.GetY();
    nCount++;
}
////析构函数
CPoint::~CPoint()
{
    --nCount;
    //点析构，剩余点数
}

////重载+运算
CPoint CPoint::operator+(CPoint pt)
{
    return CPoint(x+pt.GetX(),y+pt.GetY());
}
////重载-运算
CPoint CPoint::operator-(CPoint pt)
{
    return CPoint(x-pt.GetX(),y-pt.GetY());
}

void CPoint::ShowPoint()
{
    std::cout<<this->GetX()<<' '<<this->GetY()<<std::endl;
}