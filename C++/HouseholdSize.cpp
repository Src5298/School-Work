/*
Author: Samuel Cockrum
Date: 3/13/22
Course: COP-1000-03z
Errors: No Errors 
*/

#include <iostream>
#include <string>
using namespace std;
void bubbleSort(int Array[], int n)
{
     for(int i = 0; i < n-1; i++)
     for(int j = 0; j < n-i-1; j++)
     if(Array[j] > Array[j+1])
{
	 int temp = Array[j];
     Array[j] = Array[j+1];
     Array[j+1] = temp;
}
}

int main()
{
    const int SIZE = 300; 
    int householdSizes[SIZE]; 
    int x;
    int limit = SIZE;
    int householdSize = 0;
    int pairsToCompare;
    bool switchOccurred;
    int temp;
    double sum = 0;
    double mean = 0;
    int medianIndex = 0;
   cout << "Enter household size or 999 to quit: ";
   cin >> householdSize;
    x = 0;
    while(x < limit && householdSize != 999)   
{
     householdSizes[x] = householdSize;
     sum += householdSizes[x];
     x++; 
     cout << "Enter household size or 999 to quit: ";
     cin >> householdSize;
}
    limit = x;
    mean = sum / limit;
    bubbleSort(householdSizes, limit);
    cout << "Mean household size of Marengo is: " << mean << endl;
    medianIndex = (limit-1)/2;
    cout << "The median household size of Marengo is: " << householdSizes[medianIndex] << endl;
	   
return 0;
} 
