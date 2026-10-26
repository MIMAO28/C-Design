//实验四:问题2.栈栈的类模板
#include <iostream>
template<class T>
class Stack
{
private:
    static const int SIZE=100;
    T* stack;//指向动态数组
    int tos;
public:
    Stack();
    ~Stack();
    void push(T& t);
    T pop();
};

template<class T>
Stack<T>::Stack()
{
    stack=new T[SIZE];//申请空间
    tos=0;
}

template<class T>
Stack<T>::~Stack()
{
    delete[] stack;
}

template<class T>
void Stack<T>::push(T &t)
{
    if (tos>=SIZE)
    {
        std::cout<<"Stack Overflow"<<std::endl;
        return;
    }
    stack[tos]=t;
    tos++;
}

template<class T>
T Stack<T>::pop()
{
    if (tos==0)
    {
        std::cout<<"Stack Underflow"<<std::endl;
        return T{};
    }
    tos--;
    return stack[tos];
}

int main(void)
{
    Stack<int> s1;
    int x,y;
    std::cout<<"Enter two int:";
    std::cin>>x>>y;
    s1.push(x);
    s1.push(y);

    std::cout<<"int stack: "<<s1.pop()<<' '<<s1.pop()<<std::endl;

    Stack<double> s2;
    double a,b;
    std::cout<<"Enter two double:";
    std::cin>>a>>b;
    s2.push(a);
    s2.push(b);

    std::cout<<"double stack: "<<s2.pop()<<' '<<s2.pop()<<std::endl;

    Stack<char> s3;
    char c,d;
    std::cout<<"Enter two char:";
    std::cin>>c>>d;
    s3.push(c);
    s3.push(d);

    std::cout<<"char stack: "<<s3.pop()<<' '<<s3.pop()<<std::endl;
    return 0;
}