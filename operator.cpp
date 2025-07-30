//program of if_else statement
#include<iostream>
using namespace std;
int main()
{
    int a,b,max;
    cout<<("Enter two number\n");
    cin>>a>>b;//a=2,b=4
    /*if(a>b)
    {
        cout<<"a="<<a;
    }
    else
    {
        cout<<"b="<<b;
    }*/

    //we will use terniary operator
    max=(a>b)?a:b;
    cout<<max;
    return 0;
}