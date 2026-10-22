//实验三：3.汽车们
#include<iostream>
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
    std::cout<<"Vehicle"<<std::endl<<"Speed:"<<getMaxSpeed()<<std::endl<<"Weight:"<<getWeight()<<std::endl;
}