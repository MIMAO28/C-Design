//实验三：3.继承类汽车
#include "Vehicle.h"
#include <iostream>
class Motorcar:virtual public Vehicle
{
private:
    double Seatnum;
public:
    Motorcar();
    Motorcar(double,double,double);

    double getSeatnum();
    void setSeatnum(double);

    virtual void showVehicle();
    virtual void Run();
    virtual void Stop();

};
Motorcar::Motorcar()
{
    Seatnum=5;
}
Motorcar::Motorcar(double a,double b,double c)
{
    setMaxSpeed(a);
    setWeight(b);
    Seatnum=c;
}
double Motorcar::getSeatnum()
{
    return Seatnum;
}
void Motorcar::setSeatnum(double a)
{
    Seatnum=a;
}
void Motorcar::showVehicle()
{
    std::cout<<"Motorcar"<<std::endl<<"Seatnum:"<<getSeatnum()<<std::endl<<"Weight:"<<getWeight()<<std::endl<<"MaxSpeed:"<<getMaxSpeed()<<std::endl;
}
void Motorcar::Run()
{
    std::cout<<"Bicycle is running "<<std::endl;
}
void Motorcar::Stop()
{
    std::cout<<"Bicycle stopped "<<std::endl;
}