// Write a program to demonstrate a class template for any suitable situation of your choice.
#include <iostream>
using namespace std;

template <class T>
class Calculator
{
    T a, b;
    
public:
    void input()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void display()
    {
        cout << "Sum = " << a + b << endl;
    }
};

int main()
{
    Calculator<int> c;

    c.input();
    c.display();

    return 0;
}