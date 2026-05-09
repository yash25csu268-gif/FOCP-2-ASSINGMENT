#include <iostream>
using namespace std;

class Product {
    string name;
    float price;
    int quantity;

public:
    Product(string n, float p, int q) {
        name = n;
        price = p;
        quantity = q;
    }

    float totalCost() {
        return price * quantity;
    }

    void display() {
        cout << "Product: " << name << endl;
        cout << "Total Cost: " << totalCost() << endl;
    }

    ~Product() {
        cout << "Product removed from memory." << endl;
    }
};

int main() {
    Product p1("Laptop", 50000, 2);
    Product p2("Mouse", 1000, 3);

    p1.display();
    cout << endl;
    p2.display();

    return 0;
}
