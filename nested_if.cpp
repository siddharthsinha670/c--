//Check if a number is positive, negative, or zero

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<("Enter the number:");
    cin>>num;
    if(num>0)
    {
        cout<<("this number is positive.");
    }
    else if(num==0)
    {
        cout<<("the number is zero.");
    }
    else
    {
        cout<<("the number is negative");
    }
    return 0;
}