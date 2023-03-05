/*
Author:Samuel Cockrum
Date:3/5/22
Course: COP-1000-03z
Errors: Same as Bubblesort.ccp, I can get the code to run and compile but I can't get the array to properly display the correct information.
*/
#include <string>
#include <iostream>
using namespace std;
void bsort( string[], int );

int main()
{
   const int SIZE = 5;
   double score[SIZE] = {85, 90, 65, 95, 75};
  
  

   for ( int SIZE = 0; SIZE < 5; SIZE++ )
   cout << score[SIZE] << endl;
	
	return 0;
}
void bsort( string score[], int SIZE)
{
	bool flag;
	string temp;
	int x;
	int y;
	int comparisons = SIZE - 1;
	int numberOfEls = SIZE;
	
	int pairsToCompare = numberOfEls - 1;
	while( y < comparisons)
	x = 0;
	{
		flag= false;
		for ( int x = x +1; x < pairsToCompare; x++)
		{
			if ( score[x] > score[x-1] )
			{
				temp = score[x+1];
				score[x+1] = score[x];
				score[x] = temp;
				flag = true;
			}
			x = x +1;
		}
		y = y + 1;
		pairsToCompare = pairsToCompare - 1;
	}

}
