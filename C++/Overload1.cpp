/*
Author:Samuel Cockrum
Date:4/12/22
Course: COP-1000-03z
Errors: No errors.
*/
#include  <iostream>
using namespace std;
int operate (int a, int b);
float operate ( float a, float b);

int main()
{
	int x = 5, y = 2;
	float n = 5.0, m = 2.0;
	cout << operate (x,y);
	cout << "\n";
	cout << operate (n,m);
	cout << "\n";
	return 0;
}
int operate (int a, int b)
{
	return (a*b);
}
float operate (float a, float b)
{
	return (a/b);
}
