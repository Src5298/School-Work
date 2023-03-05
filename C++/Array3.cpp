/*
Author:Samuel Cockrum
Date:4/12/22
Course: COP-1000-03z
Errors: No errors.
*/
#include  <iostream>
using namespace std;

double getAverage(int*arr, int size);

int main()
{
	int balance[5] = {1000, 2, 3, 17, 50};
	int size = sizeof(balance) / sizeof(balance[0]);
	double avg;
	avg = getAverage( balance, size);
	cout << "Average value is: " << avg << endl;
	return 0;
}
double getAverage(int arr[5], int size)
{
	int i, sum =0;
	double avg;
	for (i = 0; i < size; ++i)
	{
		sum += arr[i];
	}
	avg = double(sum) / size;
	return avg;
}
