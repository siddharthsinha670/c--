//Check if a number is positive or negative using if-else.


#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<("Enter the number:");
    cin>>a;
    if(a>=0)
    {
        cout<<("The number is positive.");
    }
    else
    {
        cout<<("The number is negative.");
    }
    return 0;
}