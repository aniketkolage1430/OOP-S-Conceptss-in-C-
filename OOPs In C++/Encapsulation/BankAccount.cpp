//Encapsulation in C++
#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    void setAccount(string name, double bal) {
        accountHolder = name;
        balance = bal;
    }
    void deposit(double amount) {
        balance += amount;
    }
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;
    acc.setAccount("Aniket", 1000);
    acc.deposit(500);
    cout << "Balance: " << acc.getBalance() << endl;
    return 0;
}