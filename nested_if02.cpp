//Check if a character is alphabet or not, and if so, check if it is a vowel.

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<("Enter the character:");
    cin>>ch;
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            cout<<"this is a vowel.";
        }
        else
        {
            cout<<"this is a consonant.";
        }
    }
    else
    {
        cout<<"this is not a letter.";
    }
    return 0;
}