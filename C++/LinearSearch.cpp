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
	int i;
	int num;
	float index;
    float array[6] = {107, 110, 215, 305, 405, 505};
	float maxNumElements = 6;
	bool elementFound = false;
	float inputValue;
	cout << " Please Enter A Value: ";
	cin >> inputValue;
	index = 0;
	while (not elementFound, index <= maxNumElements){
		if(array[i] == inputValue){
			elementFound = true;
		}
		else{
			index = index++;
			break;
		}
		if (elementFound){
			cout << " Value found was: " << array[i] << " at index: " << index << endl;
		} 
		else{
			cout << " Value not found: " << inputValue << endl;
			break;
		}
	}
	return 0;
}

