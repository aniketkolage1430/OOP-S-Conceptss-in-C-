//Abstraction in C++
#include <iostream>
using namespace std;

class BankAccount {
public:
    virtual void withdraw(double amount) = 0;  // Pure virtual
};

class SavingsAccount : public BankAccount {
public:
    void withdraw(double amount) override {
        cout << "Withdrawing " << amount << " from Savings Account" << endl;
    }
};

class CurrentAccount : public BankAccount {
public:
    void withdraw(double amount) override {
        cout << "Withdrawing " << amount << " from Current Account" << endl;
    }
};

int main() {
    BankAccount *acc1 = new SavingsAccount();
    BankAccount *acc2 = new CurrentAccount();
    acc1->withdraw(2000);
    acc2->withdraw(5000);
    delete acc1;
    delete acc2;
    return 0;
}