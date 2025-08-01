//Check the grade of a student: Marks > 90: Grade A  ,Marks > 75: Grade B  ,Else: Grade C


#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter the marks of the student: ";
    cin >> marks;
    if (marks > 75) {
        if (marks > 90) {
            cout << "Grade A";
        } else {
            cout << "Grade B";
        }
    } else {
        cout << "Grade C";
    }
    return 0;
}