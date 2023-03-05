/*
Author: Samuel Cockrum
Date:1/19/22
Course:COP-1000-03z
Discription: Design Pseudocode for a program that accepts two numbers from the user and then compares and displays which is larger or if the two numbers are equal.
*/
#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout<<"Enter first number:";
	cin>>num1;
	cout<<"Enter second number:";
	cin>>num2;
	if(num1>num2)
	
	{
		cout<<"First number "<<num1<<" is the larger number";
	}
	else
	{
		cout<<"Second number "<<num2<<" is the larger number";
	}
			
	return 0;
}


