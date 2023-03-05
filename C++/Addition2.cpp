/*
Author:Samuel Cockrum
Date:4/12/22
Course: COP-1000-03z
Errors: No errors.
Notes: There was no change in the outcome of the program after changing  a&b to c&d
*/
#include  <iostream>
using namespace std;

int addition (int, int);

int main()
{
	int z;
	int a = 5;
	int b = 3;
	z = addition (a,b);
	cout << "The result is: " << z;
	return 0;
}

int addition (int c, int d)
{
	int r;
	r = c+d;
	return (r);
}
