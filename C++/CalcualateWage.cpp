/*
Author:Samuel Cockrum
Date:2/8/22
Course: COP-1000-03z
Pseudocode:
Start
num numberOfHours
num hourlyRate
num wage
ouput “Enter numberOfHours”
input numberOfHours
output “Enter hourlyRate”
input hourlyRate
if number of hours are less than or equal to forty
calculate wage
output wage
if number of hours more than forty subtract hours by forty then multiply by 1.5x
calculate wage
output wage
stop
Errors: No errors.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	double numberOfHours;
	float hourly_rate;
	float overtime_rate;
	float wage;
	double max_Hours = 40;
	
	cout<< "Enter hours Worked ";
	cin>> numberOfHours;
	cout<< "Enter hourly Rate ";
	cin>> hourly_rate;
	
	if (numberOfHours <= 40)
	{
		wage = hourly_rate * numberOfHours;
		cout<< "The Final Wage is: " << wage << endl;
	}
	else if (numberOfHours > 40)
	{
		overtime_rate = (numberOfHours - 40) * 1.5 * hourly_rate;
		wage = max_Hours * hourly_rate + overtime_rate;
		cout<< "The Final Wage is: " << wage << endl;
	}
	return 0;
}

