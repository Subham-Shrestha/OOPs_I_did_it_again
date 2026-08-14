// Write a program using exception handling in which an object type is thrown.
#include <iostream>
using namespace std;

class Error{
public:
    string message;

    Error(string msg){
        message = msg;
    }
};

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;

    try{
        if (age < 0){
            throw Error("Age cannot be negative!");
        }

        cout << "Your age is " << age << endl;
    }

    catch (Error e){
        cout << "Exception caught: " << e.message << endl;
    }

    return 0;
}