/*
Author:Samuel Cockrum
Date:3/5/22
Course: COP-1000-03z
Errors: No errors.
*/
#include <iostream>
#include <string>
using namespace std;
int main()

{
string addIn;
const int NUM_ITEMS = 5; 
string addIns[] = {"Cream", "Cinnamon", "Chocolate", "Amaretto", "Whiskey"};
double addInPrices[] = {.89, .25, .59, 1.50, 1.75};
bool foundIt = false; 
int x;       
double orderTotal = 2.00; 
while(true){
cout << "Enter coffee add-in or XXX to quit: ";
cin >> addIn;
foundIt=false;
double orderTotal = 2.00; 
for(x=0; x<NUM_ITEMS;x++){
 if(addIns[x].compare(addIn)==0){
foundIt=true;
orderTotal+=addInPrices[x];
break;
}
}
if(foundIt){
cout<<"The Total order is: "<<addIn<<" :$"<<orderTotal<<endl;
}
else if(addIn.compare("XXX")==0){
cout<<"Good Bye!"<<endl;
break;
}
else{
cout<<"Sorry we don't carry that."<<endl;
   }
}

return 0;

} 
