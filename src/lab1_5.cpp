//实验1 第五题：读取文件加行号，写入文件与屏幕
#include<iostream>
#include<fstream>
#include<string>

int main(void)
{
    std::ifstream fin("input.txt");//创建一个文件输入流dx，绑定,把读的位置放在第一行开头
    if (!fin)//文件-》程序
    {
        std::cout<<"打不开input"<< std::endl;
        return 1;
    }
    std::ofstream fout("output.txt");//创建一个文件输出流，绑定,把读的位置放在第一行开头
    std::string line;//用于存当前行内容
    int x=1;
    while (getline(fin,line))
    {
        std::cout<<x<<":"<<line<< std::endl;
        fout<<x<<":"<<line<< std::endl;
        x++;
    }
    fin.close();
    fout.close();
    return 0;
}
