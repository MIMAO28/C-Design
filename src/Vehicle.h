#include<iostream>
#pragma once
class Vehicle
{
private:
    double MaxSpeed;
    double Weight;
public:
    Vehicle();
    Vehicle(double,double);
    double getMaxSpeed();
    double getWeight();
    void setMaxSpeed(double nSpeed);
    void setWeight(double nWeight);
    virtual void showVehicle();
    virtual void Run();
    virtual void Stop();
};

Vehicle::Vehicle()
{
    MaxSpeed=0;
    Weight=0;
}
Vehicle::Vehicle(double nMaxSpeed,double nWeight)
{
    MaxSpeed=nMaxSpeed;
    Weight=nWeight;
}

double Vehicle::getMaxSpeed()
{
    return MaxSpeed;
}

double Vehicle::getWeight()
{
    return Weight;
}

void Vehicle::setMaxSpeed(double nMaxSpeed)
{
    MaxSpeed=nMaxSpeed;
}

void Vehicle::setWeight(double nWeight)
{
    Weight=nWeight;
}

void Vehicle::showVehicle()
{
    std::cout<<"Vehicle"<<std::endl;
    std::cout<<"MaxSpeed: "<<getMaxSpeed()<<std::endl;
    std::cout<<"Weight: "<<getWeight()<<std::endl;
}
void Vehicle::Run()
{
    std::cout<<"Vehicle is running"<<std::endl;
}
void Vehicle::Stop()
{
    std::cout<<"Vehicle stopped"<<std::endl;
}
