#include<iostream>
using namespace std;
int main()
{
    float price;
    cout<<("tell me the price of laptop");
    cin>>price;
    if(price<=50)
    {
        cout<<("too cheaper dont consider this type of laptop");
    }
    else if(price<=50)
    {
        cout<<("good price i will buy at this range");
    }
    else if(price<=60)
    {

        cout<<("decent price i will think about this"); 
    }
    else if(price<=70)
    {
        cout<<("overprice i will consider");
    }
    else if(price<=80)
    {
        cout<<("over price i will not buy this laptop");
    }
    else if (price>=90)
    {
        cout<<("dont consider this range of laptop");
    }
    return 0;
}