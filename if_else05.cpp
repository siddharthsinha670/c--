//Check if a person is a minor or adult.


#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<("Enter the age:");
    cin>>age;
    if(age>=18)
    {
        cout<<("he is adult");
    }
    else
    {
        cout<<("He is minor.");
    }
    return 0;
}