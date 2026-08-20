/* Implement a Program in C++ by defining a class to represent a bank account.
Include the following:
Data Members
● Name of the depositor
● Account number
● Type of account (Saving, Current etc.)
● Balance amount in the account
Member Functions
● To assign initial values
● To deposit an amount
● To withdraw an amount after checking the balance
● To display name and balance*/

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string name;
    int accountNumber;
    string accountType;
    float balance;

public:

    // Function to assign initial values
    void assignValues()
    {
        cout << "Enter depositor name: ";
        cin >> name;

        cout << "Enter account number: ";
        cin >> accountNumber;

        cout << "Enter account type (Saving/Current): ";
        cin >> accountType;

        cout << "Enter initial balance: ";
        cin >> balance;
    }

    // Function to deposit amount
    void deposit()
    {
        float amount;

        cout << "Enter amount to deposit: ";
        cin >> amount;

        balance = balance + amount;

        cout << "Amount deposited successfully." << endl;
    }

    // Function to withdraw amount
    void withdraw()
    {
        float amount;

        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Function to display name and balance
    void display()
    {
        cout << "\n--- Account Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account;
    int choice;

    account.assignValues();

    do
    {
        cout << "\n--- Bank Account Menu ---" << endl;
        cout << "1. Deposit amount" << endl;
        cout << "2. Withdraw amount" << endl;
        cout << "3. Display account details" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            account.deposit();
            break;
        case 2:
            account.withdraw();
            break;
        case 3:
            account.display();
            break;
        case 4:
            cout << "Thank you for using the banking program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}