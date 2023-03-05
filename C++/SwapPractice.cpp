#include <iostream>
#include <string>
using namespace std;
void bsort(string[], int );

int main()
{
	const int SIZE = 5;
	string names[SIZE] = { "Hank", "John", "Sam", "Jenny", "David" };
	for ( int i = 0; i < SIZE; i++ )
	cout << names[i] << endl;

	bsort( names, SIZE );

	cout << endl << endl;

	for ( int i = 0; i < SIZE; i++ )
	cout << names[i] << endl;
	
	return 0;
}
void bsort(string s[], int size)
{
	bool swapflag;
	string temp;
	
	do
	{ 
	swapflag = false; 
	for ( int i = 1; i < size;i++)
	{
		if ( s[i] < s[i-1] )
		{
		  temp = s[i-1];
		  s[-1] = s[i];
		  s[i] = temp;
		  swapflag = true;	
		}
	}
	
	}
	while ( swapflag);
 } 
