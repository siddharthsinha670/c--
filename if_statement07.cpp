//Write a program to check if a character is uppercase.


#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<("Enter a character:");
    cin>>ch;
    if(ch>='A' && ch<= 'Z')
    {
        cout<<("the character is uppercase.");
    } 
    return 0;
}