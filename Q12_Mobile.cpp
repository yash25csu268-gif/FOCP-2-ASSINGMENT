#include <iostream>
using namespace std;

class Mobile {
    string brand;
    int price;
    int storage;

public:
    Mobile(string b) {
        brand = b;
        price = 0;
        storage = 0;
    }

    Mobile(string b, int p) {
        brand = b;
        price = p;
        storage = 0;
    }

    Mobile(string b, int p, int s) {
        brand = b;
        price = p;
        storage = s;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
        cout << "Storage: " << storage << " GB" << endl;
    }
};

int main() {
    Mobile m1("Samsung");
    Mobile m2("Apple", 80000);
    Mobile m3("OnePlus", 45000, 256);

    m1.display();
    cout << endl;

    m2.display();
    cout << endl;

    m3.display();

    return 0;
}
