/*
Author:Samuel Cockrum
Date:4/24/22
Course: COP-1000-03z
Errors: No errors.
*/

#include "Rectangle.cpp"
#include <iostream>
using namespace std;
int main()
{
  
Rectangle rectangle1;
Rectangle rectangle2;
rectangle1.setLength(10.0);
rectangle1.setWidth(5.0);
rectangle2.setLength(7.0);
rectangle2.setWidth(3.0);
  
cout << "Perimeter of rectangle1: " << rectangle1.calculatePerimeter() << endl;
cout << "Area of rectangle1: " << rectangle1.calculateArea() << endl;
cout << "Perimeter of rectangle2: " << rectangle2.calculatePerimeter() << endl;
cout << "Area of rectangle2: " << rectangle2.calculateArea() << endl;
  
return 0;
}
