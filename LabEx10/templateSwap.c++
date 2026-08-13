//  Create a function template to swap 2 values. Using its template function, swap 2 integer, floating point, and character values.
#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Before swapping integers: " << num1 << " " << num2 << endl;
    swapValues(num1, num2);
    cout << "After swapping integers: " << num1 << " " << num2 << endl;

    double num1float, num2float;
    cout << "Enter two decimal numbers: ";
    cin >> num1float >> num2float;
    cout << "Before swapping doubles: " << num1float << " " << num2float << endl;
    swapValues(num1float, num2float);
    cout << "After swapping doubles: " << num1float << " " << num2float << endl;

    char firstChar, secondChar;
    cout << "Enter two characters: ";
    cin >> firstChar >> secondChar;
    cout << "Before swapping characters: " << firstChar << " " << secondChar << endl;
    swapValues(firstChar, secondChar);
    cout << "After swapping characters: " << firstChar << " " << secondChar << endl;
    return 0;
}