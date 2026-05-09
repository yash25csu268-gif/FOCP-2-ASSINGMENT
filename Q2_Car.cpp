#include <iostream>
using namespace std;

class Car {
    string brand;
    float price;

public:
    Car(string b, float p) {
        brand = b;
        price = p;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Car c1("BMW", 5000000);
    Car c2("Audi", 4500000);

    c1.display();
    cout << endl;
    c2.display();

    return 0;
}
