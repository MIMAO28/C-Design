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
    CPoint operator+(CPoint pt);
    CPoint operator-(CPoint pt);
};
std::ostream& operator<<(std::ostream& out,CPoint pt)
{
    out<<'('<<pt.GetX()<<','<<pt.GetY()<<')';
    return out;
}
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
    nCount++;
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
int main()
{
    CPoint a, b;

    std::cout << "请输入两个点的坐标：\n";
    std::cin >> a >> b;

    CPoint sum = a + b;
    CPoint difference = a - b;

    std::cout << "a：" << a << '\n';
    std::cout << "b：" << b << '\n';
    std::cout << "a+b：" << sum << '\n';
    std::cout << "a-b：" << difference << '\n';

    return 0;
}