#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imaginary;

public:
    void input()
    {
        cout << "Enter real number : ";
        cin >> real;
        cout << "Enter imaginary number: ";
        cin >> imaginary;
    }
    void display()
    {
        if (imaginary >= 0)
        {
            cout << real << " + " << imaginary << "i" << endl;
        }
        else
        {
            cout << real << imaginary << "i" << endl;
        }
    }

    void add(Complex c1, Complex c2)
    {
        real = c1.real + c2.real;
        imaginary = c1.imaginary + c2.imaginary;
    }

    void subtract(Complex c1, Complex c2)
    {
        real = c1.real - c2.real;
        imaginary = c1.imaginary - c2.imaginary;
    }
};

int main()
{
    Complex c1, c2, sum, diff;

    cout << "Enter First Complex Number : " << endl;
    c1.input();

    cout << "\nEnter Second Complex Number : " << endl;
    c2.input();

    sum.add(c1, c2);
    diff.subtract(c1, c2);

    cout << "\nResults : " << endl;
    cout << "First original number : ";
    c1.display();

    cout << "Second original number : ";
    c2.display();

    cout << "Sum: ";
    sum.display();

    cout << "Difference: ";
    diff.display();

    return 0;
}