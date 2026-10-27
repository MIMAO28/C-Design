//实验二 问题1：完成CPoint成员函数++问题3：重载+- 问题4：重载>><<
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
    //问题三：成员函数重载
    CPoint operator+(CPoint pt);

};

//问题四：全局函数重载
CPoint operator-(CPoint pt1,CPoint pt2)
{
    return CPoint(pt1.GetX()-pt2.GetX(),pt1.GetY()-pt2.GetY());
}

std::ostream& operator<<(std::ostream& out,CPoint pt)
{
    out<<'('<<pt.GetX()<<", "<<pt.GetY()<<')';
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
    nCount++;
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
}

////重载+运算
CPoint CPoint::operator+(CPoint pt)
{
    return CPoint(x+pt.GetX(),y+pt.GetY());
}
////重载-运算

void CPoint::ShowPoint()
{
    std::cout<<'('<<this->GetX()<<", "<<this->GetY()<<')'<<std::endl;
}
int main()
{
    std::cout<<"Initial point count: "<<CPoint::GetCount()<<std::endl;
    {
        //1.普通构造&拷贝构造演示
        CPoint p1(1, 2);
        CPoint p2(p1);

        std::cout<<"Point count after construction: "<<CPoint::GetCount()<<std::endl;

        //2.指针&引用，不创建新的点对象
        CPoint* pt = &p1;
        CPoint& re = p1;

        std::cout<<"Point count after pointer and reference: "<<CPoint::GetCount()<<std::endl;

        //3.分别通过对象,指针,用调用成员函数
        p1.ShowPoint();
        pt->SetX(3);
        re.SetY(4);

        std::cout<<"Updated coordinates: ("<<pt->GetX()<<", "<<re.GetY()<<')'<<std::endl;

        //p2独立，不随p1变化
        std::cout<<"p1: "<<p1<<std::endl;
        std::cout<<"p2: "<<p2<<std::endl;

        //4.加减运算
        CPoint sum = p1+ p2;//p1.operator+(p2);
        CPoint difference = p1- p2;

        std::cout<<"p1 + p2: "<<sum<<std::endl;
        std::cout<<"p1 - p2: "<<difference<<std::endl;

        //5.输入和输出重载，验证连续输入
        std::cout<<"Enter two points (x1 y1 x2 y2): ";
        std::cin>>p1>>p2;

        std::cout<<"p1 after input: "<<p1<<std::endl;
        std::cout<<"p2 after input: "<<p2<<std::endl;

        std::cout<<"Point count before scope end: "<<CPoint::GetCount()<<std::endl;
    }

    // 6. 检查对象是否全部析构
    std::cout<<"Point count after scope end: "<<CPoint::GetCount()<<std::endl;

    return 0;
}