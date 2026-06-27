#include <iostream>
using namespace std;

class AccountHolder
{
private:
    int accountNo;
    char accountHolderName[50];
    float balance;

public:
    // Method to store values
    void store()
    {
        cout << "\nEnter Account Number: ";
        cin >> accountNo;

        cout << "Enter Account Holder Name: ";
        cin >> accountHolderName;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    // Method to retrieve values
    void display()
    {
        cout << "\n----- Account Details -----\n";
        cout << "Account No: " << accountNo << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    AccountHolder acc[3]; // 3 customers
    int i;

    // Input data for 3 customers
    for (i = 0; i < 3; i++)
    {
        cout << "\nCustomer " << i + 1;
        acc[i].store();
    }

    // Display data for 3 customers
    for (i = 0; i < 3; i++)
    {
        acc[i].display();
    }

    return 0;
}