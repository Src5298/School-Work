#include <iostream>
#include <string>
using namespace std;
int main()
{
string service;
const string SERVICE_1 = "bath";
const string SERVICE_2 = "cut";
const string SERVICE_3 = "trim nails";
double charge;
const double  BATH_CHARGE = 15.00;
const double  CUT_CHARGE = 7.00;
const double  NAIL_CHARGE = 5.00;
cout << "Enter Service" << endl;
//cin >> service;
getline(cin,service);
if (service == SERVICE_1)
 {
  charge = BATH_CHARGE;
 }
 else if (service == SERVICE_2)
 {
  charge = CUT_CHARGE;
 }
  else if (service == SERVICE_3)
 {
  charge = NAIL_CHARGE;
 }
  else
  {
   charge = 0.0;
  }
 if (charge > 0.0)
 {
   cout << "The charge for a doggy " << service << " is $" << charge << 
endl;
 }
 else
 {
  cout << "We do not perform the " << service << " service." << endl;
 }
 system("pause");
 return 0;
}
