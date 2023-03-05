/*
Author:Samuel Cockrum
Date:4/12/22
Course: COP-1000-03z
Errors: No errors.
*/
#include  <iostream>
using namespace std;

int addition (int a, int b);

int main()
{
	int z;
	z = addition (5,3);
	cout << "The result is: " << z;
	return 0;
}

int addition (int a, int b)
{
	int r;
	r = a+b;
	return (r);
}
