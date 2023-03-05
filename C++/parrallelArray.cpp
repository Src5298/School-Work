/*
Author: Samuel Cockrum
Date: 3/1/22
Course: COP-1000-03z
Errors: While pulling from the array I can't get the item to pull the correct price, I've tried running through the pseudocode and can't find a way to get it to run correctly.
*/
#include <iostream>
using namespace std;
int main()
{
	int item, badItemCount = 0;
	float price;
	const int SIZE = 6;
	int VALID_ITEM[SIZE] = {106, 108, 307, 405, 457, 688};
	int VALID_PRICE[SIZE] = {0.59, 0.99, 4.50, 15.99, 17.50, 39.00};
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
			if(item == VALID_ITEM[sub])
			foundIt = true;
			price = VALID_PRICE[sub];
			sub += 1;
		}
		if(foundIt == true)
		cout << MSG_YES<< endl;
		if(foundIt == true)
		cout << " The price of item " << item << " is " << price << endl;
		else
		{
			cout << MSG_NO << endl;
			badItemCount = badItemCount + 1;
		}
		cout << "Enter item number or " << FINISH << " to quit ";
		cin >> item;
	}
	cout << badItemCount << " items had invalid numbers. " << endl;
	return 0;
}
