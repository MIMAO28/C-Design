//实验三：3.继承类摩托车
#include "Bicylce.h"
#include "Motorcar.h"
#include<iostream>
class Motorbike :public Bicycle,public Motorcar
{
public:
    Motorbike();
    Motorbike(double,double,double,double);
    virtual void showVehicle();
    virtual void Run();
    virtual void Stop();
};


Motorbike::Motorbike()
{
}

Motorbike::Motorbike(double a,double b,double c,double d)
{
    setMaxSpeed(a);
    setWeight(b);
    setHeight(c);
    setSeatnum(d);
}

void Motorbike::showVehicle()
{
    std::cout<<"Motorbike"<<std::endl<<"Seatnum:"<<getSeatnum()<<std::endl<<"Weight:"<<getWeight()<<std::endl<<"MaxSpeed:"<<getMaxSpeed()<<std::endl<<"Height:"<<getHeight()<<std::endl;

}

void Motorbike::Run()
{
    std::cout<<"Motorbike is running "<<std::endl;
}
void Motorbike::Stop()
{
    std::cout<<"Motorbike stopped "<<std::endl;
}

int main()
{
    //1.创建四种车辆，测试构造函数和各自的成员函数
    Vehicle v(100,1000);
    Bicycle b(30,15,1.2);
    Motorcar c(180,1500,5);
    Motorbike m(120,180,1.1,2);

    std::cout<<"1.Direct call"<<std::endl;
    v.showVehicle();
    v.Run();
    v.Stop();

    b.showVehicle();
    b.Run();
    b.Stop();

    c.showVehicle();
    c.Run();
    c.Stop();

    m.showVehicle();
    m.Run();
    m.Stop();

    //2.同一个Vehicle指针分别指向四种对象，观察虚函数调用的结果
    std::cout<<std::endl<<"2.Vehicle pointer call"<<std::endl;
    Vehicle* ptr=&v;
    ptr->showVehicle();
    ptr->Run();
    ptr->Stop();

    ptr=&b;
    ptr->showVehicle();
    ptr->Run();
    ptr->Stop();

    ptr=&c;
    ptr->showVehicle();
    ptr->Run();
    ptr->Stop();

    ptr=&m;
    ptr->showVehicle();
    ptr->Run();
    ptr->Stop();

    return 0;
}
