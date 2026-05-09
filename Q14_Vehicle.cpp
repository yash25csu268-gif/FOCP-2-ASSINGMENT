#include <iostream>
using namespace std;

class Vehicle {
    string vehicleNo;
    string ownerName;
    string type;
    int fee;

public:
    Vehicle() {
        vehicleNo = "Not Assigned";
        ownerName = "Unknown";
        type = "General";
        fee = 0;
    }

    Vehicle(string v, string o) {
        vehicleNo = v;
        ownerName = o;
        type = "General";
        fee = 0;
    }

    Vehicle(string v, string o, string t, int f) {
        vehicleNo = v;
        ownerName = o;
        type = t;
        fee = f;
    }

    void displayVehicle() {
        cout << "Vehicle No: " << vehicleNo << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Type: " << type << endl;
        cout << "Fee: " << fee << endl;
    }
};

int main() {
    Vehicle v1;
    Vehicle v2("DL01AB1234", "Yash");
    Vehicle v3("DL05XY5678", "Rahul", "Commercial", 5000);

    v1.displayVehicle();
    cout << endl;

    v2.displayVehicle();
    cout << endl;

    v3.displayVehicle();

    return 0;
}
