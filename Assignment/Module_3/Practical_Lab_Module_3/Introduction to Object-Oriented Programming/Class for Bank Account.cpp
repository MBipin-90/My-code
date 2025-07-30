/*Que no.2  Create a class BankAccount with data members like balance and member functions like deposit and withdraw.
Implement encapsulation by keeping the data members private. Objective: Understand encapsulation in classes.*/

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance; // Private data member

public:
    // Constructor to initialize the balance
    BankAccount(double initialBalance) {
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0; // Initialize with 0 if initial balance is negative
            cout << "Initial balance cannot be negative. Setting to 0." <<endl;
        }
    }

    // Member function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << ". New balance: " << balance <<endl;
        } else {
            cout << "Deposit amount must be positive." <<endl;
        }
    }

    // Member function to withdraw money
    void withdraw(double amount) {
        if (amount > 0) {
            if (balance >= amount) {
                balance -= amount;
                cout << "Withdrew: " << amount << ". New balance: " << balance <<endl;
            } else {
                cout << "Insufficient funds. Current balance: " << balance <<endl;
            }
        } else {
            cout << "Withdrawal amount must be positive." <<endl;
        }
    }

    // Member function to get the current balance (read-only access)
    double getBalance() const {
        return balance;
    }
};

int main() {
    // Create a BankAccount object
    BankAccount myAccount(1000.0); // Initial balance of 1000

    // Demonstrate deposit
    myAccount.deposit(500.0);

    // Demonstrate withdrawal
    myAccount.withdraw(200.0);

    // Attempt to withdraw more than available balance
    myAccount.withdraw(1500.0);

    // Get and display the current balance
    cout << "Current balance: " << myAccount.getBalance() <<endl;

    // Attempt to create an account with a negative initial balance
    BankAccount anotherAccount(-50.0);
    cout << "Another account balance: " << anotherAccount.getBalance() <<endl;

}
