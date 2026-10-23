//实验四：问题1.函数模板
#include<iostream>
#include<cstring>
template<class T>
T min(T &a,T &b)
{
    if (a<b)return a;
    if (a>b)return b;
}
char* min(char* a,char* b)
{
    if (std::strcmp(a,b)<=0)return a;
    if (std::strcmp(b,a)<=0)return b;
}
int main(void)
{
    int a=3,b=5;
    std::cout<<"int min:"<<min(a,b)<<std::endl;

    double x=2.5,y=1.8;
    std::cout<<"double min:"<<min(x,y)<<std::endl;

    char s1[]="banana";
    char s2[]="apple";
    std::cout<<"string min:"<<min(s1,s2)<<std::endl;
}