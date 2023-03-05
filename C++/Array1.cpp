/*
Author:Samuel Cockrum
Date:4/12/22
Course: COP-1000-03z
Errors: No errors.
*/
#include  <iostream>
using namespace std;

double getAverage(int arr[5]);

int main()
{
	int balance[5] = {1000, 2, 3, 17, 50};
	double avg;
	avg = getAverage( balance);
	cout << "Average value is: " << avg << endl;
	return 0;
}
double getAverage(int arr[5])
{
	int i, sum =0;
	double avg;
	for (i = 0; i < 5; ++i)
	{
		sum += arr[i];
	}
	avg = double(sum) / 5;
	return avg;
}
