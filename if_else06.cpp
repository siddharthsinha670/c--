//Check whether a student passed (marks >= 40) or failed.

#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<("enter the marks:");
    cin>>marks;
    if(marks>=40)
    {
        cout<<("He is pass.");
    }
    else
    {
        cout<<("He is fail");
    }
    return 0;
}
