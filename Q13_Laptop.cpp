#include <iostream>
using namespace std;

class Laptop {
    string brand;
    int ram;
    int price;

public:
    void setDetails(string b) {
        brand = b;
        ram = 0;
        price = 0;
    }

    void setDetails(string b, int r) {
        brand = b;
        ram = r;
        price = 0;
    }

    void setDetails(string b, int r, int p) {
        brand = b;
        ram = r;
        price = p;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Laptop l1, l2, l3;

    l1.setDetails("HP");
    l2.setDetails("Dell", 16);
    l3.setDetails("Lenovo", 32, 75000);

    l1.display();
    cout << endl;

    l2.display();
    cout << endl;

    l3.display();

    return 0;
}
