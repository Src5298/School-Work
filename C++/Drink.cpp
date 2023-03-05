#include <iostream>
#include <string>
using namespace std;
int main()
{
     string customerFirstName;
     string customerLastName;
     string drink = ""; // customer's favorite drink
     cout << "Enter customer's first name: ";
     cin >> customerFirstName;
     cout << "Enter customer's last name: ";
     cin >> customerLastName;
     cout << "Enter customer's favorite drink: ";
     cin >> drink;
    if (drink == "Coke" && drink == "Pepsi")
    {
       cout << "Customer's first name: " << customerFirstName << endl;
       cout << "Customer's last name: " << customerLastName << endl;
       cout << "Customer's favorite drink: " << drink << endl;
       
    }
    else
    {
    cout <<  customerFirstName << " "   << customerLastName << " does not prefer Coke or Pepsi" 
     << endl;
    }
    system("pause");
 return 0;
}
