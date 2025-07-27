//find area of the circle and square
#include <iostream>
using namespace std;
int main()
{
    int r,l,area;
    cout<<"enter the length  of the square/n";
    cin>>l;
    area=l*l;
    cout<<"area of the square is:"<<area;
    cout<<"enter the radius of the circle:/n";
    cin>>r;
    area=3.14*r*r;
    cout<<"area of the circle is:/n"<<area;
    return 0;
}