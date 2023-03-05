/*
Author: Samuel Cockrum
Date: 1/25/22
Course: COP-1000-03z
Errors: No Errors 
*/
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    float a = 10.0 + 2.0 * 5.0 - 6.0 / 2.0;
    float b = 10.0 + (2.0 * 5.0) - (6.0 / 2.0);
    float c = (10.0 + 2.0) * (5.0 - 6.0) / 2.0;
	cout<< " Float a  = " << a << endl;
	cout<< " Float b  = " << b << endl;
	cout<< " Float c  = " << c << endl;
	return 0;
}
