/*  Write a program to simulate banking transaction of 3 users. The programmust be menudriven. Include the following operations in the menu:
1. Deposit
2. Withdraw
3. Display Balance
4. Display Total Operations
5. Exit
Use a static member function to display total number of operations (option 4) performedthrough the application.*/

#include <iostream>
#include <string>
using namespace std;

class Bank{
private:
    static int total_operations;
    double balance;
    int account_number;
    string account_holder_name;
public:
    Bank(int accNo, string name, double initialBalance){
        account_number = accNo;
        account_holder_name = name;
        balance = initialBalance;
    }

    void deposit(double amount){
        if (amount > 0){
            balance += amount;
            total_operations++;
            cout << "\nDeposit successful ^-^ " << endl << "Amount: NRs." << amount << endl;
            cout << "New Balance : " << endl << "NRs." << balance << "^-^" << endl;
        }
        else{
            cout << "You drunk or what? Nigga you broke." << endl;
        }
    }

    void withdraw(double amount){
        if (amount > 0 && amount <= balance){
            balance -= amount;
            total_operations++;
            cout << "\nWithdrawal successful! " << endl << "Amount: NRs." << amount << endl;
            cout << "New Balance:" << endl << "NRs." << balance << "^-^" << endl;
        }
        else if (amount > balance){
            cout << "\nInsufficient balance! Current balance: NRs." << balance << endl;
        }
        else{
            cout << "\nInvalid amount! Amount must be positive." << endl;
        }
    }

    void displayBalance(){
        cout << "\n \t \t Account Details" << endl;
        cout << "Account Holder : " << account_holder_name << endl;
        cout << "Account Number : " << account_number << endl;
        cout << "Current Balance : " << endl << "NRs." << balance << endl;
    }

    static void displayTotalOperations()
    {
        cout << "Total Operations Performed: " << total_operations << endl;
    }
};

int Bank::total_operations = 0;

int main(){
    Bank account1(1001, "User 1", 5000);
    Bank account2(1002, "User 2", 3000);
    Bank account3(1003, "User 3", 7000);

    // Array of pointers for easier management
    Bank *accounts[3] = {&account1, &account2, &account3};

    int choice, userChoice, operation;
    double amount;

    cout << "\n========================================" << endl;
    cout << "   BANK MANAGEMENT SYSTEM" << endl;
    cout << "========================================" << endl;

    while (true)
    {
        cout << "\n\nSelect User Account:" << endl;
        cout << "1. User 1 (Account #1001)" << endl;
        cout << "2. User 2 (Account #1002)" << endl;
        cout << "3. User 3 (Account #1003)" << endl;
        cout << "4. Display Total Operations" << endl;
        cout << "5. Exit Program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3)
        {
            userChoice = choice - 1;

            while (true)
            {
                cout << "\n--- Operations Menu ---" << endl;
                cout << "1. Deposit" << endl;
                cout << "2. Withdraw" << endl;
                cout << "3. Display Balance" << endl;
                cout << "4. Go Back to User Selection" << endl;
                cout << "Enter your choice: ";
                cin >> operation;

                switch (operation)
                {
                case 1:
                    cout << "Enter amount to deposit: NRs.";
                    cin >> amount;
                    accounts[userChoice]->deposit(amount);
                    break;

                case 2:
                    cout << "Enter amount to withdraw: NRs.";
                    cin >> amount;
                    accounts[userChoice]->withdraw(amount);
                    break;

                case 3:
                    accounts[userChoice]->displayBalance();
                    break;

                case 4:
                    cout << "\nReturning to user selection..." << endl;
                    break;

                default:
                    cout << "\nInvalid choice! Please try again." << endl;
                    continue;
                }

                if (operation == 4)
                    break;
            }
        }
        else if (choice == 4)
        {
            Bank::displayTotalOperations();
        }
        else if (choice == 5)
        {
            cout << "\n========================================" << endl;
            cout << "Thank you for using Bank Management System!" << endl;
            Bank::displayTotalOperations();
            cout << "========================================" << endl;
            break;
        }
        else
        {
            cout << "\nInvalid choice! Please try again." << endl;
        }
        // cout << "Enter a secret code to quadruple your balance : ";
        // string secretCode;
        // cin >> secretCode;
        // cout << "Uh-oh! You entered the wrong code. Your whole balance is mine now. 😈😈";
    }

    return 0;
}