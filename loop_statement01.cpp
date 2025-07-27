//verify the age ofthe customer who want to come party and their age is above 18 or not
//we will use if and else if ladder statement
#include<iostream>

using namespace std;
int main()
{
    int age;
    cout<<"tell  me your age.\n";
    cin>>age;
    if(age<18)
    {
        cout<<"You can not come to my party.\n";
    }
    else if(age==18)
    {
        cout<<("you are a kid and you will get a kid pass to the party.\n");
    }
    else
    {
        cout<<("you can come to party.\n");
    }
    return 0;
}