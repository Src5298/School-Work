/*
Author:Samuel Cockrum
Date:3/5/22
Course: COP-1000-03z
Errors: No errors.
*/
#include <iostream>
using namespace std;
int main()
{
string NUM_CITIES[10]={"Acme","Albion","Detroit","Watervliet","Coloma","Saginaw","Richland","Glenn", "Midland", "Brooklyn"};
string inCity;
cout<<"Enter a City name"<<endl; 
cin>>inCity; 
int foundIt = 0; 
  
for(int i=0;i<10;i++){ 
if(NUM_CITIES[i]==inCity){
foundIt = 1;
break;
}
else{ 
foundIt = 0;
}
} 
if(foundIt == 1){ 
cout<<"It is a city in Michigan";
}
else{
cout<<"Not a city in Michigan";
}
return 0;
} 
