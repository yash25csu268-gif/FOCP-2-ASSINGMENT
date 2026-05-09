#include <iostream>
#include <map>
using namespace std;

class Bank {
    map<int, int> accounts;

public:
    bool CREATE(int userId, int amount) {
        if (accounts.find(userId) == accounts.end()) {
            accounts[userId] = amount;
            return true;
        }

        accounts[userId] += amount;
        return false;
    }

    bool DEBIT(int userId, int amount) {
        if (accounts.find(userId) == accounts.end() || accounts[userId] < amount)
            return false;

        accounts[userId] -= amount;
        return true;
    }

    bool CREDIT(int userId, int amount) {
        if (accounts.find(userId) == accounts.end())
            return false;

        accounts[userId] += amount;
        return true;
    }

    int BALANCE(int userId) {
        if (accounts.find(userId) == accounts.end())
            return -1;

        return accounts[userId];
    }
};

int main() {
    Bank b;

    cout << b.CREATE(101, 5000) << endl;
    cout << b.CREDIT(101, 2000) << endl;
    cout << b.DEBIT(101, 1000) << endl;
    cout << b.BALANCE(101) << endl;

    return 0;
}
