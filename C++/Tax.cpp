/*
Author:Samuel Cockrum
Date:4/5/22
Course: COP-1000-03z
Errors: No errors.
*/
#include <iostream>
#include <string>
void computeTax(double, double);
using namespace std;

int main(){
	double balance;
	double rate;
	cout << " Enter balance: ";
	cin >> balance;
	cout << "Enter rate: ";
	cin >> rate;
	computeTax(balance, rate);
	return 0;
}
void computeTax(double amount, double rate){
	double tax;
	tax = amount*rate;
	cout << " Amount: " << amount << " Rate: " << rate << " Tax: " << tax <<endl;
}
