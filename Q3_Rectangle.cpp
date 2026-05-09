#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }
};

int main() {
    Rectangle r(10, 5);

    cout << "Area of Rectangle: " << r.area() << endl;

    return 0;
}
