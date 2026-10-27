// 实验一 第2题:重载函数 Max1
#include <iostream>

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

    std::cout<<"Enter two integers: ";
    std::cin>>a>>b;
    std::cout<<"Max: "<<Max1(a, b)<<std::endl;

    std::cout<<"Enter three integers: ";
    std::cin>>a>>b>>c;
    std::cout<<"Max: "<<Max1(a, b, c)<<std::endl;

    double x,y,z;

    std::cout<<"Enter two doubles: ";
    std::cin>>x>>y;
    std::cout<<"Max: "<<Max1(x, y)<<std::endl;

    std::cout<<"Enter three doubles: ";
    std::cin>>x>>y>>z;
    std::cout<<"Max: "<<Max1(x, y, z)<<std::endl;
    return 0;
}
