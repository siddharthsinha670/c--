//age for work


#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<("Enter your age:");
    cin>>age;
     if(age>=18)
     {
        if(age>=18 && age<=59)
        {
            cout<<("Eligible for work.");
        }
        else
        {
            cout<<("Not eligebal for work.");
        }
     }
     else
     {
        cout<<("we could not consider them for work.");
     }
     return 0;
}