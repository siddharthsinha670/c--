//perimetre of rectangle
#include<iostream>
using namespace std;
int main()
{
    int l,b,perimeter;
    cout<<"enter the length of the perimeter of the rectangle:\n";
    cin>>l;
    cout<<"enter the breadth of the perimeter of the rectangle:\n";
    cin>>b;
    perimeter=2*(l+b);
    cout<<"the perimeter of the rectangle is:\n"<<perimeter;
    return 0;
}