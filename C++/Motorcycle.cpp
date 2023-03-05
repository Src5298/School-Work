/*
Author:Samuel Cockrum
Date:4/24/22
Course: COP-1000-03z
Errors: No errors.
*/

#include "Vehicle.cpp"
#include <iostream>
using namespace std;

class Motorcycle:public Vehicle
{   
    private:
        bool sidecar;
    public:
    void setSidecar(bool sidecar)
    {
        this->sidecar=sidecar;
    }
    bool getSidecar()
    {
        return sidecar;
    }
    void accelerate(double mph)
    {
        if(getSpeed()+ mph < getMaxSpeed())
            setSpeed(getSpeed() + mph);
        else
            cout << "This Motorcycle cannot go that fast." << endl;
    }
};


