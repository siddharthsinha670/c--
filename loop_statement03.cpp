#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<("tell me your marks\n");
    cin>>marks;
    if(marks<50)
    {
       cout<<("poor marks you scored in exam\n");
    }
    else if(marks<=100)
    {
      cout<<("average marks you have got in exam");
    }
    else if(marks<=150)
    {
        cout<<("good marks you have got in exam");
    }
    else if(marks<=200)
    {
        cout<<("better marks you ahve got in exam");
    }
    return 0;

}