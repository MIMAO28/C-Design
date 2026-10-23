//实验四:问题2.栈
#include <iostream>
template<class T>
class Stack
{
public:
    Stack();
    ~Stack();
    void push(T& t);
    T pop();
private:
    static const int SIZE=100;
    T* stack;
    int tos;
};
template<class T>
Stack<T>::Stack()
{
    stack=new[SIZE];
    tos=0;
}
template<class T>
Stack<T>::~Stack()
{
    delete[] stack;
}