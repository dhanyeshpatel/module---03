#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  

public:
    BankAccount(double initialBalance) {
        if (initialBalance < 0) {
            balance = 0;
            cout << "Initial balance can't be negative. Setting to 0." << endl;
        } else {
            balance = initialBalance;
        }
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

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

    void displayBalance() {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
  
    BankAccount account(500);

    account.displayBalance();

    account.deposit(200);
    account.displayBalance();

    account.withdraw(100);
    account.displayBalance();

    account.withdraw(700);  

    return 0;
}
