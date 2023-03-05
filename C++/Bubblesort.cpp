/*
Author:Samuel Cockrum
Date:3/5/22
Course: COP-1000-03z
Errors:Code will run and compile but I can't get the array to switch into the correct order. Even after looking online I'm not completely sure what i'm doing wrong. Any advice would be appreciated.
*/
#include <string>
#include <iostream>
using namespace std;
void bsort( string[], int );

int main()
{
   const int SIZE = 5;
   double score[SIZE] = {85, 90, 65, 95, 75};
  int y = 0;
  int x = 0;

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
	

	while( y < comparisons)
	x = 0;
	{
		flag= false;
		for ( int x = x + 1; x < comparisons; x++)
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
	}

}
