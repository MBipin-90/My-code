#include <iostream>
#include <string>
using namespace std;

class ATM {
private:
    string accountHolder = "Bipin";
    string address = "India";
    string branch = "Maninagar";
    int accountNumber = 56789; // Example
    double balance = 900000;
    int correctPin = 1234; // Example PIN

public:
    bool verifyPin() {
        int pin;
        cout << "Enter your PIN: ";
        cin >> pin;
        return pin == correctPin;
    }

    void displayMainMenu() {
        cout << "ATM Main Menu Screen"<<endl;
        cout << "Enter [1] To Deposit Cash"<<endl;
        cout << "Enter [2] To Withdraw Cash"<<endl;
        cout << "Enter [3] To Balance Inquiry"<<endl;
        cout << "Enter [9] To Exit ATM"<<endl;
        cout << "PLEASE ENTER A SELECTION AND PRESS RETURN KEY: ";
    }

    void deposit() {
        double amount;
        cout << "ATM ACCOUNT DEPOSIT SYSTEM\n";
        cout << "The Names of the Account Holders are: " << accountHolder <<endl;
        cout << "The Account Holders' address is: " << address <<endl;
        cout << "The Branch location is: " << branch <<endl;
        cout << "Account number: " << accountNumber <<endl;
        cout << "Present available balance: Rs. " << balance <<endl;
        cout << "Enter the Amount to be Deposited Rs. ";
        cin >> amount;

        balance += amount;
        cout << "Your new available Balanced Amount is Rs. " << balance <<endl;
        cout << "Thank You!\n";
        cout << "Press any key to Return to the Main Menu";
        cin.ignore();
        cin.get();
    }

    void withdraw() {
        double amount;
        cout << "ATM ACCOUNT WITHDRAWAL\n";
        cout << "The Names of the Account Holders are: " << accountHolder <<endl;
        cout << "The Account Holders' address is: " << address <<endl;
        cout << "The Branch location is: " << branch <<endl;
        cout << "Account number: " << accountNumber <<endl;
        cout << "Enter the Amount to be Withdrawn Rs. ";
        cin >> amount;

        if (amount > balance) {
            cout << "Insufficient Available Balance in your account."<<endl;
            cout << "Sorry Press any key to continue";
        } else {
            balance -= amount;
            cout << "Withdrawal successful."<<endl;
            cout << "Your new available Balanced Amount is Rs. " << balance <<endl;
            cout << "Thank You!\n";
            cout << "Press any key to Return to the Main Menu";
        }
        cin.ignore();
        cin.get();
    }

    void balanceInquiry() {
        cout << "ATM ACCOUNT BALANCE INQUIRY"<<endl;
        cout << "The Names of the Account Holders are: " << accountHolder <<endl;
        cout << "The Account Holders' address is: " << address <<endl;
        cout << "The Branch location is: " << branch <<endl;
        cout << "Account number: " << accountNumber <<endl;
        cout << "Present available balance: Rs. " << balance <<endl;
        cout << "Press any key to Return to the Main Menu";
        cin.ignore();
        cin.get();
    }

    void run() {
        if (!verifyPin()) {
            cout << "Incorrect PIN. Exiting..."<<endl;
            return;
        }

        while (true) {
            displayMainMenu();
            int choice;
            cin >> choice;

            switch (choice) {
                case 1:
                    deposit();
                    break;
                case 2:
                    withdraw();
                    break;
                case 3:
                    balanceInquiry();
                    break;
                case 9:
                    cout << "Thank you for using our ATM. Goodbye!"<<endl;
                    return;
                default:
                    cout << "Invalid selection. Please try again."<<endl;
                    cin.ignore();
                    cin.get();
            }
        }
    }
};

int main() {
    ATM atm;
    atm.run();
}
