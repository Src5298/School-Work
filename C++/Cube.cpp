/*
Authour:Samuel Cockrum
Date: 1/20/22
Course: COP-1000-03z
Discritpion: Represent the logic of a program that allows the user to enter a value for one endge of a cube, then calculate the surface area of the the cube and it's volume
Pseudocode:   Module Main()
              Declare Surface Area & Volume 
              Display "Enter the side of a Cube"
			  Input num1 
			  for Volume = side * side * side
			  for Surface area = 6 * side * side
			  Display "Volume of the cube is"
			  Display " Surface are of the cube is"
			  end main
Errors: No Errors when compiled.
*/
#include<iostream>
using namespace std;
int main()
{
	float side, Surface_Area,Volume;
	cout<<"\nEnter the side of a Cube: ";
	cin>>side;
	Volume = (side * side * side);
	Surface_Area = 6 * side * side;
	cout<<"\n\nVolume of the cube is: "<<Volume;
	cout<<"\nSurface Area of the cube is: "<<Surface_Area;
	cout<<endl;
	return 0;
}
