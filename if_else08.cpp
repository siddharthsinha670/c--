//Check whether a number is a multiple of 10 or not.

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<("Enter the number:");
    cin>>num;
    if(num%10==0)
    {
        cout<<("this is multiple of 10.");
    }
    else
    {
        cout<<("this is not a multiple of 10");
    }
    return 0;
}