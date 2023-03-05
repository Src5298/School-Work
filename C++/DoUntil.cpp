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
	int num;
	int squared;
	do
	{
	  cout << "Enter a number or 0 to quit " << endl;
	  cin >> num;
	  squared = num * num;
	  cout << num << " squared is " << squared << endl;	
	}
	while (num != 0);
	return 0;
}
