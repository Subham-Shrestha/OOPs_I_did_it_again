#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int v = 0) : value(v) {}

    friend double operator/(Number &a, Number &b);
};

double operator/(Number &a, Number &b)
{
    if (b.value == 0)
    {
        cout << "Cannot divide by zero!\n";
        return 0;
    }

    return static_cast<double>(a.value) / b.value;
}

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    Number x(a);
    Number y(b);

    double result = x / y;
    cout << a << " / " << b << " = " << result << endl;

    return 0;
}