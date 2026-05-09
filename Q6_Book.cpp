#include <iostream>
using namespace std;

class Book {
    string title;
    float price;

public:
    Book(string t, float p) {
        title = t;
        price = p;
    }

    void display() {
        cout << "Book Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b1("C++ Programming", 500);
    Book b2("Data Structures", 650);

    b1.display();
    cout << endl;
    b2.display();

    return 0;
}
