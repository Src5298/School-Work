/*
Author:Samuel Cockrum
Date:4/17/22
Course: COP-1000-03z
Errors: No errors.
*/
// STRINGEX.CPP
// *******************************************************************
//  Last Revised 4/20/2014 chnage <iostream.h> to <iostream> and added
//   using namespace std; to correct fatal error: iostream.h: No such file
//   or directory das
//  4-28-2020 I had apstring.h in here and it gave me an undefined reference error
//  when I changed to apstring.cpp it worked
// *******************************************************************
#include <iostream>
#include "apstring.cpp"
using namespace std;
int main()
{
   int len1;
   int len2;
  apstring MyString1;
  apstring MyString2("ABCDEFGHIJKLMNOPQRSTUVWXYZ");

  MyString1 = "Hello World!";
  len1 = MyString1.length();
  len2 = MyString2.length();
  
  cout << MyString1 << '\n';
  cout << "Length = " << len1 << '\n';
  cout << MyString2 << '\n';
  cout << "Lenght = " << len2 << '\n';

  return 0;
}
