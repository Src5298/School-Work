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
	int a;
	int b;
	a = 5;
	b = 3;
	z = addition (a,b);
	cout << "The result is: " << z << endl;
	cout << " a = " << a << endl;
	cout << " b = " << b << endl;
	return 0;
}

int addition (int a, int b)
{
	int r;
	r = a+b;
	a = 100;
	b = 200;
	return (r);
}
