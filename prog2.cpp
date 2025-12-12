#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;
    string ownerName;

public:
    
    BankAccount(string accNo, string owner, double initialBalance) {
        accountNumber = accNo;
        ownerName = owner;
        balance = initialBalance;
    }


    void credit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount credited: $" << amount << endl;
        } else {
            cout << "Invalid credit amount!" << endl;
        }
    }

    void debit(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount debited: $" << amount << endl;
        } else {
            cout << "Debit failed. Invalid amount or insufficient balance." << endl;
        }
    }

    void displayBalance() const {
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount myAccount("ACC2025", "Alice Johnson", 1000.00);

    cout << "----- Bank Account Operations -----" << endl;
    myAccount.displayBalance();

    myAccount.credit(500);    
    myAccount.displayBalance();

    myAccount.debit(300);      
    myAccount.displayBalance();

    myAccount.debit(2000);     

    return 0;
}