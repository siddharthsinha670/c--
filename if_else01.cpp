#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<("enter the number:");
    cin>>num;
    if(num % 2 == 0)
    {
        cout << "Even number";
    }
    else
    {
        cout << "Not an even number";
    }
   return 0;
}