/*
Author: Samuel Cockrum
Date: 3/22/22
Course: COP-1000-03z
Errors: No Errors 
*/
#include <iostream>
using namespace std;
int main() {
    int HEIGHT;
    int WIDTH ;
    cout << "Enter num of rows:";
    cin >> HEIGHT;
    cout << "Enter number of columns";
    cin >> WIDTH;
    int areaArray[HEIGHT*WIDTH];

    for(int n=0;n<HEIGHT;n++)
{
    for(int m=0;m<WIDTH;m++)
{
    areaArray[(n*WIDTH)+m] = (n+1)*(m+1);
}

}
    for(int n=0;n<HEIGHT*WIDTH;n++)
{
    cout << n << " "<<areaArray[n] << endl;
}
return 0;
}
