#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string ownerName;
    int accountNumber;
    double balance;

public:
    // TODO: Default constructor
    BankAccount(){
        ownerName = "Unknown";
        accountNumber = 0;
        balance = 0.0;
    }
    
    // TODO: Parameterized constructor
    BankAccount(string name, int accNum, double bal){
        ownerName = name;
        accountNumber = accNum;
        balance = bal;
    }

    // TODO: deposit function
    void deposit(double amount){
        balance+= amount;
    }

    // TODO: withdraw function
    void withdraw(double amount){
        balance -= amount;
    }

    // TODO: displayAccount function
    void displayAccount() const{
        cout <<"Username: " <<ownerName << "\n";
        cout << "Account Number: " << accountNumber<< "\n";
        cout << "Balance: " << balance<< "$\n";
    }
};

int main() {
    // Create account with default constructor
    BankAccount acc1;

    // Create account with parameterized constructor
    BankAccount acc2("Sonika", 2025001, 150.0);

    // Deposit and withdraw
    acc1.deposit(100);
    acc1.withdraw(30);
    acc2.deposit(50);
    acc2.withdraw(200); // should fail if balance is insufficient

    // Display both accounts
    acc1.displayAccount();
    acc2.displayAccount();

    return 0;
}
