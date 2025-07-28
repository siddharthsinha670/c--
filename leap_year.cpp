//Check if a year is a leap year or not
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<("Enter the year:/n");
    cin>>year;
    if(year%4==0 && year%100!=0)
    {
        cout<<("this year is a leap year.");
    }
    else if(year%400==0)
    {
        cout<<("this year is a leap year.");
    }
    else
    {
        cout<<("this year is not a leap year.");
    }
    return 0;   
}