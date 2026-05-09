#include <iostream>
using namespace std;

class Employee {
    int emp_id;
    float salary;

public:
    Employee(int id, float sal) {
        emp_id = id;
        salary = sal;
    }

    void display() {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e1(101, 45000);

    e1.display();

    return 0;
}
