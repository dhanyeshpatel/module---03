#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // Private data member

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance) {
        if (initialBalance < 0) {
            balance = 0;
            cout << "Initial balance can't be negative. Setting to 0." << endl;
        } else {
            balance = initialBalance;
        }
    }

    // Function to deposit amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    // Function to withdraw amount
    void withdraw(double amount) {
        if (amount > 0) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrawn: " << amount << endl;
            } else {
                cout << "Insufficient balance!" << endl;
            }
        } else {
            cout << "Withdrawal amount must be positive." << endl;
        }
    }

    // Function to display current balance
    void displayBalance() {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    // Create object with initial balance
    BankAccount account(500);

    account.displayBalance();

    account.deposit(200);
    account.displayBalance();

    account.withdraw(100);
    account.displayBalance();

    account.withdraw(700);  // Attempt to withdraw more than balance

    return 0;
}
