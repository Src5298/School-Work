/*
Author:Samuel Cockrum
Date:4/17/22
Course: COP-1000-03z
Errors: No errors.
*/

#include <iostream>
using namespace std;
void multiplyNumbers(int , int , int &);
int main() {
   int num1 = 10;
   int num2 = 20;
   int product = 0;
   cout<<"Value of product is: "<<product<<endl;
   multiplyNumbers(num1, num2, product);
   cout<<num1 <<" * "<<num2<<" is "<<product<<endl;
   return 0;
}


void multiplyNumbers(int a, int b, int &result)
{
   result = a*b;
}
