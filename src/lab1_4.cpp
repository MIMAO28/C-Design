//实验1 第四题:动态分配内存完成转置
#include<iostream>
void transpose(int** num)
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
    int **num = new int*[3];//申请3个int*数组，保存三行首地址
    for (int i=0;i<3;i++)
    {
        num[i] = new int[3];//分别给三行申请空间，保存三个整数
    }
    std::cout<<"输入3*3矩阵(分配内存式)"<< std::endl;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            std::cin>>num[i][j];
        }
    }
    std::cout<<"当前矩阵："<< std::endl;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            std::cout<<num[i][j]<<' ';
        }
        std::cout<< std::endl;
    }
    transpose(num);
    std::cout<<"转置后矩阵:"<< std::endl;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            std::cout<<num[i][j]<<' ';
        }
        std::cout<< std::endl;
    }
    for (int i=0;i<3;i++)
    {
        delete[] num[i];//先释放每一行的地址，防止失去访问各行的入口
    }
    delete[] num;
    return 0;
}