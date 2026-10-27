//实验1 第三题：3*3矩阵转置
#include<iostream>
void transpose(int num[3][3])
{
    for (int i=0;i<3;i++)
    {
        for (int j=i+1;j<3;j++)
        {
            int temp=num[j][i];
            num[j][i]=num[i][j];
            num[i][j]=temp;
        }
    }
}
int main(void)
{
    int num[3][3];
    std::cout<<"Enter a 3x3 matrix:"<<std::endl;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            std::cin>>num[i][j];
        }
    }
    std::cout<<"Original matrix:"<<std::endl;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            std::cout<<num[i][j]<<' ';
        }
        std::cout<<std::endl;
    }
    transpose(num);//debug中的StepInto追踪到函数内部
    std::cout<<"Transposed matrix:"<<std::endl;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            std::cout<<num[i][j]<<' ';
        }
        std::cout<<std::endl;
    }
    return 0;
}
