/*
Author:Samuel Cockrum
Date:4/17/22
Course: COP-1000-03z
Errors: No errors.
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    const int LEN = 9;
    char sample1[LEN];
    char sample2[LEN];
    char result1;
    char result2;
    int i;
    cout << "Enter 9 lowercase characters: ";
    for(i = 0; i < LEN; i++){
        cin >> sample1[i];
        result1=toupper(sample1[i]);
        cout << result1 << endl;
    }
    cin.ignore(256,'\n');
    cout << "Enter 9 uppercase characters: ";
    for(i = 0; i < LEN; i++){
        cin >> sample2[i];
        result2=tolower(sample2[i]);
        cout << result2 << endl;
    }
    cin.ignore(256,'\n');
    return 0;
}
