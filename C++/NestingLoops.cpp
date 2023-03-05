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
	int sum = 0;
	int outerCounter = 0;
	int innerCounter = 0;
	int rows, columns;
	const int MAX_ROWS = 7, MAX_COLS = 5;
	for (rows = 0; rows < MAX_ROWS;	rows++)
	{
		outerCounter =outerCounter + 1;
		for (columns = 0; columns < MAX_COLS; columns++)
		{
			sum = sum + (rows + columns);
			innerCounter = innerCounter + 1;
		}
	}
	cout << " Value of sum is " << sum << endl;
	cout << " Value of innerCounter is " << innerCounter << endl;
	cout << " Value of columns is " << columns << endl;
	cout << " Value of outerCounter is " << outerCounter << endl;
	cout << " Value of rows is " << rows << endl;
	return 0;
}
