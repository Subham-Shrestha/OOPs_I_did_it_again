// Write a program to demonstrate a catch block which catches all exceptions.
#include <iostream>
using namespace std;

int main()
{
    int luck;
    cout << "Enter your lucky number(1-100): ";
    cin >> luck;

    try{
        if (luck < 1 || luck > 100){
            throw "Invalid lucky number.";
        }

        if (luck == 13){
            throw 13;
        }
        cout << "Your lucky number is " << luck << endl;
    }

    catch (...){
        cout << "An exception was caught." << endl;
    }

    return 0;
}