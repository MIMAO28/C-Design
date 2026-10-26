// 实验一 第2题:重载函数 Max1
#include <iostream>
using namespace std;

//两个整数
int Max1(int a, int b)
{
    return (a > b) ? a : b;
}

//三个整数
int Max1(int a, int b, int c)
{
    int m = (a > b) ? a : b;
    return (m > c) ? m : c;
}

//两个双精度数
double Max1(double a, double b)
{
    return (a > b) ? a : b;
}

//三个双精度数
double Max1(double a, double b, double c)
{
    double m = (a > b) ? a : b;
    return (m > c) ? m : c;
}

int main()
{
    int a, b, c;

    cout<<"输入两个整数: ";
    cin>>a>>b;
    cout<<"最大值 = "<<Max1(a, b)<<endl;

    cout<<"输入三个整数: ";
    cin>>a>>b>>c;
    cout<<"最大值 = "<<Max1(a, b, c)<<endl;

    double x,y,z;

    cout<<"输入两个小数: ";
    cin>>x>>y;
    cout<<"最大值 = "<<Max1(x, y)<<endl;

    cout<< "输入三个小数: ";
    cin>>x>>y>>z;
    cout<<"最大值 = "<<Max1(x, y, z)<<endl;
    return 0;
}
