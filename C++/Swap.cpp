/*
Author: Samuel Cockrum
Date: 3/13/22
Course: COP-1000-03z
Errors: No Errors 
*/

#include<iostream>
using namespace std;


int main()
{
	int first = 0;
	int second = 0;
	int third = 0;
	int temp;
	cout << " Enter first number: ";
	cin >> first;
	cout << " Enter second number: ";
	cin >> second;
	cout << " Enter third number: ";
	cin >> third;
	if(first > second)
	{
		temp = first;
		first = second;
		second = temp;
	}
	if ( second > third)
	{
		temp = second;
		second = third;
		third = temp;
	}
	if ( first > second)
	{
			temp = first;
		first = second;
		second = temp;
	}
	cout << " Smallest: " << first << endl;
	cout << " Nesxt smallest: " << second << endl;
	cout << " Largest: " << third << endl;
	return 0;
}
