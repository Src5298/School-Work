/*
Author: Samuel Cockrum
Date: 3/13/22
Course: COP-1000-03z
Errors: No Errors 
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string product1 = "Hammer";
	string product2 = " Wrench";
	string temp;
	
	if (product1 > product2)
	{
		temp = product1;
		product1 = product2;
		product2 = temp;
	}
	cout << " Value stored in product1 = " << product1 << endl;
	cout << " Value stored in product2 = " << product2 << endl;
	system("pause");
	return 0;
}
