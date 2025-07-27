//cricket score
//we will use if and else if ladder statement
#include<iostream>

using namespace std;
int main()
{
    int score;
    cout<<"tell  me your score.\n";
    cin>>score;
    if(score==50)
    {
        cout<<"half century\n";
    }
    else if(score==100)
    {
        cout<<("century.\n");
    }
    else if(score==200)
    {
        cout<<("Double century");
    }
    else
    {
        cout<<("well played champian .\n");
    }
    return 0;
}