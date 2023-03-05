/*
Author:Samuel Cockrum
Date:4/24/22
Course: COP-1000-03z
Errors: No errors.
*/

#include "Motorcycle.cpp"
#include <iostream>
using namespace std;

int main()
{
    Motorcycle motorcycleOne;
    Motorcycle motorcycleTwo;
    bool sidecarStat;
    sidecarStat=true;
    motorcycleOne.setSidecar(sidecarStat);
    sidecarStat=false;
    motorcycleTwo.setSidecar(sidecarStat);
    motorcycleOne.setMaxSpeed(90);
    motorcycleTwo.setMaxSpeed(85);
    motorcycleOne.setSpeed(65);
    motorcycleTwo.setSpeed(60);
   cout<<"Accelerating motorcycleOne "<<endl;
   motorcycleOne.accelerate(30);
   cout<<"Accelerating motorcycleTwo "<<endl;
   motorcycleTwo.accelerate(20);
   cout<<endl<<"Current Speed of motorcycleOne is "<<motorcycleOne.getSpeed()<<endl;
   cout<<"Current Speed of motorcycleTwo is "<<motorcycleTwo.getSpeed()<<endl;
  
    if(motorcycleOne.getSidecar())
        cout<<endl<<"motorcycleOne has a sidecar"<<endl;
    else
        cout<<endl<<"motorcycleOne does not have a sidecar"<<endl;
    
    if(motorcycleTwo.getSidecar())
        cout<<"motorcycleTwo has a sidecar"<<endl;
    else 
        cout<<"motorcycleTwo does not have a sidecar"<<endl;
        
   return 0;
}
