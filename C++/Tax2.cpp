/*
Author:Samuel Cockrum
Date:4/5/22
Course: COP-1000-03z
Errors: No errors.
*/
#include <iostream>
#include <string>
double computeTax(double, double);
using namespace std;

int main(){
	double balance;
	double rate;
	double tax;
	cout << " Enter balance: ";
	cin >> balance;
	cout << "Enter rate: ";
	cin >> rate;
	tax = computeTax(balance, rate);
	cout << " Balance: " << balance << " Rate: " << rate << " Tax: " << tax <<endl;
	return 0;
}
double computeTax(double amount, double rate){
	double tax;
	tax = amount*rate;
	return tax;

}
