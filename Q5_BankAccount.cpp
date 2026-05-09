#include <iostream>
using namespace std;

class BankAccount {
    int accNo;
    float balance;

public:
    BankAccount(int a, float b) {
        accNo = a;
        balance = b;
    }

    void display() {
        cout << "Account Number: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b1(12345, 25000);

    b1.display();

    return 0;
}
