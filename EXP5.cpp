#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Amount deposited successfully.\n";
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        } else {
            cout << "Insufficient balance.\n";
        }
    }

    void display() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    float amount;

    cout << "Enter deposit amount: ";
    cin >> amount;
    account.deposit(amount);

    cout << "Enter withdrawal amount: ";
    cin >> amount;
    account.withdraw(amount);

    account.display();

    return 0;
}