//
// Created by Subham Shrestha on 12/06/2026.
//

// Create a function that calculates the product of 3 numbers entered by the user, regardless of the number entered being integer or floating point. Print the result as output.
#include <iostream>
using namespace std;

int product(int, int, int);
float product(float, float, float);

int main()
{
    int num1, num2, num3;
    float float_num1, float_num2, float_num3;
    cout << "Enter whether you want a decimal or integer value as 'd' or 'i' : ";
    char choice;
    cin >> choice;

    if (choice == 'd'){
        cout << "Enter three floating point numbers : ";
        cin >> float_num1 >> float_num2 >> float_num3;
        product(float_num1, float_num2, float_num3);
        
    }
    else if (choice == 'i'){
        cout << "Enter three numbers : ";
        cin >> num1 >> num2 >> num3;
        product(num1, num2, num3);
    }
    else{
        cout << "Invalid choice" << endl;
    }
    return 0;
}

int product(int num1, int num2, int num3){
    cout << "The product of " << num1 << " , " << num2 << " and " << num3 << " is : " << num1 * num2 * num3 << endl;
    return 0;
}

float product(float float_num1, float float_num2, float float_num3){
    cout << "The product of " << float_num1 << " , " << float_num2 << " and " << float_num3 << " is : " << float_num1 * float_num2 * float_num3 << endl;
    return 0;
}