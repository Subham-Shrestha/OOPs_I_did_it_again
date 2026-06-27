//
// Created by Subham Shrestha on 11/06/2026.
//

#include <iostream>
using namespace std;

int main()
{

    int marks;

    cout << endl << "Enter the marks you have obtained in OOP : ";
    cin >> marks;

    if ((marks >= 0) && (marks <= 59))
    {
        cout << endl << "Grade : F" << endl;
    }
    else if ((marks >= 60) && (marks <= 69))
    {
        cout << endl << "Grade : D" << endl;
    }
    else if ((marks >= 70) && (marks <= 79))
    {
        cout << endl << "Grade : C" << endl;
    }
    else if ((marks >= 80) && (marks <= 89))
    {
        cout << endl << "Grade : B" << endl;
    }
    else if ((marks >= 90) && (marks <= 100))
    {
        cout << endl << "Grade : A" << endl;
    }
    else
    {
        cout << endl << "Invalid marks entered" << endl;
    }

    return 0;
}