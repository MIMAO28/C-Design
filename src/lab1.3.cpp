//实验1 第四题:动态分配内存完成转置
#include<iostream>
using namespace std;
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
    int **num = new int*[3];
    for (int i=0;i<3;i++)
    {
        num[i] = new int[3];
    }
    cout<<"输入3*3矩阵(分配内存式)"<<endl;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cin>>num[i][j];
        }
    }
    cout<<"当前矩阵："<<endl;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<num[i][j]<<' ';
        }
        cout<<endl;
    }
    transpose(num);
    cout<<"转置后矩阵:"<<endl;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<num[i][j]<<' ';
        }
        cout<<endl;
    }
    for (int i=0;i<3;i++)
    {
        delete[] num[i];
    }
    delete[] num;
    return 0;
}