/*
Author: Samuel Cockrum
Date:1/14/2022
Course Number: Cop-1000
Summary: Module 1
Errors: No errors while running the Compiler but I can't get the adress line to display more than one word.
*/
#include <iostream>
using namespace std;
int main()
{
	string name;
	cout << "Please enter your name: ";
	cin >> name;
	cout << "Welcome " << name << " , and Hello World! Have a nice day! " << endl;
	cout << "Please enter your Adress: ";
	cin >> name;
	cout << "Is this the correct Adress? " << name << endl; 
	system("Pause");
	return 0;
}//end main
