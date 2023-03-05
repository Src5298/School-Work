/*
Author:Samuel Cockrum
Date:4/12/22
Course: COP-1000-03z
Errors: program comlies but I can't get "a" and "&a" to display proper values. Is there something else that needs to be added to the call function?
*/
#include  <iostream>
using namespace std;

int addition (int* a, int* b);

int main()
{
	int z;
	int a;
	int b;
	a = 5;
	b = 3;
	z = addition (&a,&b);
	cout << "The result is: " << z << endl;
	cout << " a = " << a << endl;
	cout << " b = " << b << endl;
	return 0;
}

int addition (int* a, int* b)
{
	int r;
	cout << " *a = " << *a << endl;
	cout << " a = " << a << endl;
	cout << " &a = " << &a << endl;
	r = *a+*b;
	*a = 100;
	*b = 200;
	return (r);
}
