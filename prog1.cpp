#include <iostream>
#include <string>
using namespace std;


class Movie {
public:
    string title;
    string genre;
    int releasedYear;

    Movie(string t, string g, int y) {
        title = t;
        genre = g;
        releasedYear = y;
    }
};

class BankAccount {
private:
    string accountNumber;
    double balance;
    string ownerName;

public:
    BankAccount(string accNo, double bal, string owner)
        : accountNumber(accNo), balance(bal), ownerName(owner) {}

    string getAccountNumber() const { return accountNumber; }
    double getBalance() const { return balance; }
    string getOwnerName() const { return ownerName; }

    void setBalance(double newBalance) { balance = newBalance; }
    void setOwnerName(string newName) { ownerName = newName; }
};

int main() {

    Movie movies[3] = {
        Movie("Dhurender", "action", 2025),
        Movie("Titanic", "Romance", 1997),
        Movie("pushpa 2", "smgler", 2025)
    };

    cout << "Movie List:\n";
    for (int i = 0; i < 3; i++) {
        cout << movies[i].title << " - " 
             << movies[i].genre << " - " 
             << movies[i].releasedYear << endl;
    }

    cout << "\n";


    BankAccount account("ACC12345", 1500.50, "John Doe");

    cout << "Account Owner: " << account.getOwnerName() << endl;
    cout << "Account Number: " << account.getAccountNumber() << endl;
    cout << "Balance: $" << account.getBalance() << endl;

    account.setBalance(2000.75);
    account.setOwnerName("Jane Doe");

    cout << "\nUpdated Account Info:\n";
    cout << "Account Owner: " << account.getOwnerName() << endl;
    cout << "Balance: $" << account.getBalance() << endl;

    return 0;
}