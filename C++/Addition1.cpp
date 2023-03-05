/*
Author:Samuel Cockrum
Date:2/1/22
Course: COP-1000-03z
Errors: No errors.
*/
#include <iostream> 
using namespace std; 
int addition (int a, int b) { 
int r; 
r=a+b; 
return r; 
} 
int main() { 
int z;
z = addition (5,3); 
cout << "The result is " << z; 
return 0;
}
