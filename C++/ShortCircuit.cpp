/*
Author:Samuel Cockrum
Date:2/8/22
Course: COP-1000-03z
Errors: No errors.
*/
#include <iostream>
using namespace std;
bool a (bool in)
{
	cout<< " a " << endl;
	return in;
}
bool b (bool in)
{
	cout<< " b " << endl;
	return in;
}
void test(bool i, bool j)
{
	cout<< boolalpha << i << " and " << j << " = " << (a(i) && b(j)) << endl;
	cout<< boolalpha << i << " or " << j << " = " << (a(i) || b(j)) << endl;
}
int main()
{
	test(false, false);
	test(false, true);
	test(true, false);
	test(true, true);
	return 0;
}
