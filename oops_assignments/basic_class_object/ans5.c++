#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string name;
    double balance;

public:
    // Constructor to initialize account details
    BankAccount(int accNo, string accName, double initialBalance) {
        accountNumber = accNo;
        name = accName;
        balance = initialBalance;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Rs. " << amount << " deposited successfully.\n";
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance! Withdrawal failed.\n";
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount!\n";
        } else {
            balance -= amount;
            cout << "Rs. " << amount << " withdrawn successfully.\n";
        }
    }

    // Function to display account details
    void display() {
        cout << "\nAccount Details:\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Current Balance: Rs. " << balance << endl;
    }
};

int main() {
    int accNo;
    string accName;
    double initialBalance, depositAmount, withdrawAmount;

    // Taking user input for account creation
    cout << "Enter Account Number: ";
    cin >> accNo;
    cin.ignore(); // To clear input buffer

    cout << "Enter Account Holder Name: ";
    getline(cin, accName);

    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    // Creating BankAccount object
    BankAccount account(accNo, accName, initialBalance);

    // Performing deposit and withdrawal
    cout << "\nEnter amount to deposit: ";
    cin >> depositAmount;
    account.deposit(depositAmount);

    cout << "\nEnter amount to withdraw: ";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);

    // Display final account details
    account.display();

    return 0;
}
