/*
Author:Samuel Cockrum
Date:2/8/22
Course: COP-1000-03z
Errors: No errors.
*/
#include <iostream>
using namespace std;
int main()
{
	int shippingMethod;
	float shippingCost;
	
	cout<< " Please Enter Shipping Method: 1, 2, or 3: ";
	cin>> shippingMethod;
	switch(shippingMethod)
	{
		case 1:
			shippingCost = 5.00;
			break;
		case 2:
			shippingCost = 7.50;
			break;
		case 3:
		     shippingCost = 10.00;
		     break;
		default:
			shippingCost = 0;
			break;	
	}
   	if (shippingMethod == 0)
   	{
   		cout<< " Your Shipping Method is wrong ";
	   }
	   else if (shippingMethod > 0)
	   {
	   	cout<< " Your Shipping Cost will be: " << shippingCost << endl;
	   }
	return 0;
}
