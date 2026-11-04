#include <iostream>
using namespace std;

class Account {
private:
    double balance;
public:
    Account(double b) : balance(b) {}
    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }
    void displayBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account a(1000);
    a.deposit(500);
    a.displayBalance();
    return 0;
}
