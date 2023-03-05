/*
Author: Samuel Cockrum
Date: 3/26/22
Course: COP-1000-03z
Errors:
*/
#include <iostream>
using namespace std;
int main()
{
int data[5][5] = {{30,60,88,115,140},{26,52,70,96,120},{24,46,67,89,110},{22,40,60,75,88},{20,35,50,66,84}};
int numDays;
int age;
int QUIT = 99;
cout << "enter age: ";
cin >> age;
  
while(age != QUIT)
{
       cout<<"Enter number of days 1-5: ";
       cin>>numDays;
       if(age<4)
       {
           cout<<"weekly rate: $";
           cout<<data[age][numDays-1];
           cout<<endl;
       }
       else{
           cout<<"weekly rate: ";
           cout<<data[4][numDays-1];
           cout<<endl;  
       }
       break;
   }
      
cout << "End of program" << endl;
return 0;
}
