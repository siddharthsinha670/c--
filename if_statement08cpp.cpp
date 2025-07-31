//Write a program to check if a character is lowercase.

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<("enter the alphabet:");
    cin>>ch;
    if(ch>='a' && ch<='z')
    {
        cout<<("the alphabet is in lowercase.");
    }
    return 0;
}