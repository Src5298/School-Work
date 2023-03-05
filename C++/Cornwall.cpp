/*
Author:Samuel Cockrum
Date:4/17/22
Course: COP-1000-03z
Errors: No errors.
*/
#include <iostream>
#include <string>
using namespace std;
double computeRate(int);
double computeRate(int, string);

int main()
{
    int days;
    string mealPlan;
    string question;
    double rate = 0.0;
    cout << "How many days do you plan to stay? " << endl;
    cin >> days;
    cout << "Do you want a meal plan? Y or N: " << endl;
    cin >> question;
    if(question=="Y" || question == "y") 
	{
       cout<<"Enter the meals code: "<<endl;
       cin >> mealPlan;
       rate = computeRate(days,mealPlan );
} 
    else {
	rate = computeRate(days);
}
    cout << "The rate for your stay is $" << rate << endl;

    return 0;
} 

double computeRate(int days) {
    return days * 99.99;
}
double computeRate(int days, string s) {
		
    if(s == "A") {
    return days * 169;
} 
else {
    return days * 112;
}
}


