//实验四：问题3.vector
#include<iostream>
#include<vector>
#include<algorithm>
void print(int n)
{
    std::cout<<n<<' ';
}
int main(void)
{
    std::vector<int> num;
    int n;
    std::cout<<"Enter number:"<<std::endl;
    while (std::cin>>n)
    {
        if (n==0)
        {
            break;
        }
        num.push_back(n);
    }
    std::sort(num.begin(),num.end());

    std::cout<<"Output 1:"<<std::endl;
    for (int i=0;i<num.size();i++)
    {
        std::cout<<num[i]<<' ';
    }
    std::cout<<std::endl;

    std::cout<<"Output 2:"<<std::endl;
    for (std::vector<int>::iterator i=num.begin();i!=num.end();i++)
    {
        std::cout<<*i<<' ';
    }
    std::cout<<std::endl;

    std::cout<<"Output 3:"<<std::endl;
    std::for_each(num.begin(),num.end(),print);
    return 0;
}
