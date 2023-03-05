/*
Author: Samuel Cockrum
Date:1/19/22
Course:COP-1000-03z
Discription: Write a program that outputs every even number between 2 & 100 using pseudocode
*/
#include <stdio.h>
int main()
{
	int i;
	printf("Even numbers between 2 to 100 (insclusive):\n");
	for (i = 2; i <= 100; i++)
	{
		if(i%2 == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

