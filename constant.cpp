#include<iostream>
using namespace std;
int main()
{
     const int a=10;
     //a=20; if we do this compiler will show error
     // because we have used "const" keyword.
     //"const"- it means the value is fixed we cant change it.
     cout<<a;
     return 0;
}