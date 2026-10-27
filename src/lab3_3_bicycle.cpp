//实验三：3.继承类自行车
#include "Vehicle.h"
#include <iostream>
class Bicycle:virtual public Vehicle
{
private:
    double height;
public:
    Bicycle();
    Bicycle(double,double,double);

    double getHeight();
    void setHeight(double);

    virtual void showVehicle();
    virtual void Run();
    virtual void Stop();
};

Bicycle::Bicycle()
{
    height=0;
}

Bicycle::Bicycle(double a,double b,double c)
{
    setMaxSpeed(a);
    setWeight(b);
    height=c;
}
double Bicycle::getHeight()
{
    return height;
}
void Bicycle::setHeight(double a)
{
    height=a;
}
void Bicycle::showVehicle()
{
    std::cout<<"Bicycle"<<std::endl;
    std::cout<<"MaxSpeed: "<<getMaxSpeed()<<std::endl;
    std::cout<<"Weight: "<<getWeight()<<std::endl;
    std::cout<<"Height: "<<getHeight()<<std::endl;
}
void Bicycle::Run()
{
    std::cout<<"Bicycle is running"<<std::endl;
}
void Bicycle::Stop()
{
    std::cout<<"Bicycle stopped"<<std::endl;
}