//Write a program to check if a number is divisible by both 3 and 5.
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<("Enter the number.");
    cin>>a;
    if(a % 3 % 5==0)
    {
        cout<<("this number is divisible by both 3 and 5.");
    }
    return 0;
}