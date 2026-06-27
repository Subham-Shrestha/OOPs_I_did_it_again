//
// Created by Subham shrestha on 11/06/2026.
//

#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << endl << "Enter the number of Fibonacci series : ";
    cin >> n;

    int first = 0, second = 1, next;

    cout << endl  << "Fibonacci series : ";

    if (n <= 0)
    {
        cout << "Invalid input" << endl;
    }
    else if (n == 1)
    {
        cout << first << endl;
    }
    else
    {
        cout << first << " " << second << " ";

        for (int i = 3; i <= n; i++)
        {
            next = first + second;
            cout << next << " ";
            first = second;
            second = next;
        }

        cout << endl;
    }

    return 0;
}