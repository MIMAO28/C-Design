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
    std::cout<<"初始点数："<<CPoint::GetCount()<<'\n';
    {
        //1.普通构造&拷贝构造演示
        CPoint p1(1, 2);
        CPoint p2(p1);

        std::cout<<"创建两个点后："<<CPoint::GetCount()<<'\n';

        //2.指针&引用，不创建新的点对象
        CPoint* pt = &p1;
        CPoint& re = p1;

        std::cout<<"定义指针和引用后："<<CPoint::GetCount()<<'\n';

        //3.分别通过对象,指针,用调用成员函数
        p1.ShowPoint();
        pt->SetX(3);
        re.SetY(4);

        std::cout<<"读取修改后的坐标："<<pt->GetX()<<' '<<re.GetY()<<'\n';

        //p2独立，不随p1变化
        std::cout<<"p1："<<p1<<'\n';
        std::cout<<"p2："<<p2<<'\n';

        //4.加减运算
        CPoint sum = p1+ p2;
        CPoint difference = p1- p2;

        std::cout<<"p1+p2："<<sum<<'\n';
        std::cout<<"p1-p2："<<difference<<'\n';

        //5.输入和输出重载，验证连续输入
        std::cout<<"请输入两个点，四个整数：\n";
        std::cin>>p1>>p2;

        std::cout<<"输入后的p1："<<p1<< '\n';
        std::cout<<"输入后的p2："<<p2<< '\n';

        std::cout << "作用域结束前的点数："
                  << CPoint::GetCount() << '\n';
    }

    // 6. 检查对象是否全部析构
    std::cout << "作用域结束后的点数："
              << CPoint::GetCount() << '\n';

    return 0;
}