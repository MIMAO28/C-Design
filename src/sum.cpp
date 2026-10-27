////参考程序1
//sum. cpp
#include <iostream>
int add(int a,int b);
int main()
{
    int x,y,sum;
    std::cout<<"Enter two integers: ";
    std::cin>>x;
    std::cin>>y;
    sum=add(x,y);
    std::cout<<"Sum: "<<sum<<std::endl;
    return 0;
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
