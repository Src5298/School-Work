/*
Author: Samuel Cockrum
Date: 2/15/22
Course: COP-1000-03z
Errors: No Errors 
*/
#include <iostream>
using namespace std;
int main()
{
	int count = 0;
	cout << "Please Enter a number: " << endl;
	cin >> count;
	while (count < 4)
	{
		cout << "Hello" << endl;
		count = count + 1;
		break;
	}
	while (count > 4)
	{
		cout << "Goodbye" << endl;
		break;
	}

	return 0;
}
