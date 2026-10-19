//实验1 第五题：读取文件加行号，写入文件与屏幕
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(void)
{
    ifstream fin("input.txt");//创建一个文件输入流，绑定,把读的位置放在第一行开头
    if (!fin)
    {
        cout<<"打不开input"<<endl;
        return 1;
    }
    ofstream fout("output.txt");
    string line;//用于存当前行内容
    int x=1;
    while (getline(fin,line))
    {
        cout<<x<<":"<<line<<endl;
        fout<<x<<":"<<line<<endl;
        x++;
    }
    fin.close();
    fout.close();
    return 0;
}
