#include <iostream>
#include <string>
using namespace std;
int main()
{
int custAC, custNumber;
int calledAC, calledNumber;
int callMinutes;
double callCharge;
const int MAX_MINS = 10;
const double CHARGE_1 = .25;
const double CHARGE_2 = .10;
custAC = 847;
custNumber = 5551234;
calledAC = 847;
calledNumber = 5557890;
callMinutes = 20;
if (calledAC != custAC && callMinutes >= MAX_MINS)
  { callCharge = callMinutes * CHARGE_1; }
else
   { callCharge = callMinutes * CHARGE_2; } 
    cout << "Customer Number: " << custAC << "-" << custNumber << endl;
    cout << "Called Number: " << calledAC << "-" << calledNumber << endl;
    cout << "The charge for this call is $" << callCharge << endl;
    system("pause");
  
 return 0;
}
