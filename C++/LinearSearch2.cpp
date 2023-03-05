/*
Author: Samuel Cockrum
Date: 3/1/22
Course: COP-1000-03z
Errors: No Errors 
*/

#include <iostream>
using namespace std;
int main()
{
	int item, badItemCount = 0;
	const int SIZE = 6;
	int VALID_ITEMS[] = {106, 108, 307, 405, 457, 688};
	int sub;
	bool foundIt = false;
	const string MSG_YES = " Item Available";
	const string MSG_NO = " Item not found";
	const int FINISH = 999;
	
	cout << " Enter item number or " << FINISH << " to quit ";
	cin >> item;
	
	while(item != FINISH)
	{
		foundIt = false;
		sub = 0;
		while(sub < SIZE)
		{
			if(item == VALID_ITEMS[sub])
			foundIt = true;
			sub += 1;
		}
		if(foundIt == true)
		cout << MSG_YES << endl;
		else
		{
			cout << MSG_NO << endl;
			badItemCount++;
		}
		cout << "Enter item number or " << FINISH << " to quit ";
		cin >> item;
	}
	cout << badItemCount << " items had invalid numbers. " << endl;
	return 0;
}
