/*
Author:Samuel Cockrum
Date:4/17/22
Course: COP-1000-03z
Errors: No errors.
*/

#include <iostream>
#include <string>
using namespace std;
void reverseArray(int[]);
int main()
{
    int numbers[] = {100, 90, 80, 70, 60};
    int x;
    for(int i = 0; i < 5; i++)
        cout << numbers[i] << "\t";
    cout << endl;
    reverseArray(numbers);
    for(int i = 0; i < 5; i++)
        cout << numbers[i] << "\t";
    cout << endl;
   
    return 0;  
}

void reverseArray(int array[])
{
    for(int i = 0; i <= 5/2 - 1; i++)
    {
       int temp = array[i];
       array[i] = array[5-i-1];
       array[5-i-1] = temp;
    }
}
