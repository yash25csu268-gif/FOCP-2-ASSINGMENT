#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;

public:
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1("Yash", 92);
    s1.display();

    return 0;
}
