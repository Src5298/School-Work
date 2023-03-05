/*
Author: Samuel Cockrum
Date: 2/15/22
Course: COP-1000-03z
Errors: No Errors 
*/

#include <iostream>
using namespace std;
main()
{
	int a = 21;
	int c ;
	c = a++;
	cout << "Line 1- Value of a++ is: " << c << endl;
	cout << "Line 2- Value of a is: " << a << endl;
	c = ++a;
	cout << "Line 3- Value of ++a is: " << c << endl;
	cout << "Line 3- Value of a is: " << a << endl;
	return 0;
}
