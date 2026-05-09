#include <iostream>
using namespace std;

class ElectricityBill {
public:
    void calculateBill(int units) {
        cout << "Bill: " << units * 5 << endl;
    }

    void calculateBill(int units, float rate) {
        cout << "Bill: " << units * rate << endl;
    }

    void calculateBill(int units, float rate, float fixedCharge) {
        cout << "Bill: " << (units * rate) + fixedCharge << endl;
    }
};

int main() {
    ElectricityBill e;

    e.calculateBill(100);
    e.calculateBill(100, 6.5);
    e.calculateBill(100, 6.5, 200);

    return 0;
}
