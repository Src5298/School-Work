#include <iostream>
#include <string>
using namespace std;
int main()
{
int numValue = 20;
int answer = 0;
switch(numValue)
{
case 5: answer +=5;
case 10: answer +=10;
case 15: answer +=15;
 break;
    case 20: answer +=20;
case 25: answer +=25;
default: answer = 0;
      break;    
}
 cout << "answer = " << answer <<endl;
     system("pause");
 return 0;
}
