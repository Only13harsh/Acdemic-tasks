#include <iostream>
#include <string>

using namespace std;

class BankAccount {
public:
    BankAccount(const string& accountHolder, double initialBalance)
        : accountHolder(accountHolder), balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn $" << amount << ". New balance: $" << balance << endl;
        } else {
            cout << "Insufficient funds. Withdrawal canceled." << endl;
        }
    }

    void displayBalance() const {
        cout << "Account balance for " << accountHolder << ": $" << balance << endl;
    }

    const string& getAccountHolder() const {
        return accountHolder;
    }

private:
    string accountHolder;
    double balance;
};

class BankingSystem {
public:
    void createAccount(const string& accountHolder, double initialBalance) {
        BankAccount newAccount(accountHolder, initialBalance);
        accounts.push_back(newAccount);
        cout << "Account created successfully for " << accountHolder << endl;
    }

    BankAccount* findAccount(const string& accountHolder) {
        for (int i = 0; i < accounts.size(); ++i) {
            if (accountHolder == accounts[i].getAccountHolder()) {
                return &accounts[i];
            }
        }
        return nullptr;
    }

private:
    BankAccount accounts[100]; // Fixed-size array for simplicity
    int accountCount = 0;
};

int main() {
    BankingSystem bankingSystem;

    // Sample usage
    bankingSystem.createAccount("John Doe", 1000.0);
    bankingSystem.createAccount("Alice Smith", 500.0);

    BankAccount* johnAccount = bankingSystem.findAccount("John Doe");
    if (johnAccount) {
        johnAccount->displayBalance();
        johnAccount->deposit(200.0);
        johnAccount->withdraw(300.0);
    } else {
        cout << "Account not found." << endl;
    }

    BankAccount* aliceAccount = bankingSystem.findAccount("Alice Smith");
    if (aliceAccount) {
        aliceAccount->displayBalance();
        aliceAccount->withdraw(700.0);
    } else {
        cout << "Account not found." << endl;
    }

    return 0;
}
