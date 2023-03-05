// Vehicle.cpp
#include <iostream>
using namespace std; 
class Vehicle
{
   public: 
      void setSpeed(double);
      double getSpeed();
      void accelerate(double);
      void setFuelCapacity(double);
      double getFuelCapacity();
      void setMaxSpeed(double);
      double getMaxSpeed();
   private:	
      double fuelCapacity;
      double maxSpeed;
      double currentSpeed;
}; 

void Vehicle::setSpeed(double speed)
{
   currentSpeed = speed;
   return;
}

double Vehicle::getSpeed()
{
   return currentSpeed;
}

void Vehicle::accelerate(double mph)
{
   if(currentSpeed + mph < maxSpeed)
      currentSpeed = currentSpeed + mph;
   else
      cout << "This vehicle cannot go that fast." << endl; 
}

void Vehicle::setFuelCapacity(double fuel)
{
   fuelCapacity = fuel;
}

double Vehicle::getFuelCapacity()
{
   return fuelCapacity;
}

void Vehicle::setMaxSpeed(double max)
{
   maxSpeed = max;
}

double Vehicle::getMaxSpeed()
{
   return maxSpeed;
}
