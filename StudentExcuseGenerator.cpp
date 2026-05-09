#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    string name;

    cout << "Enter student name: ";
    getline(cin, name);

    vector<string> excuses = {
        name + " couldn't complete the assignment because the laptop battery died.",
        name + " tried finishing homework, but the internet stopped working.",
        name + " was ready to submit the assignment when the file disappeared.",
        name + "'s computer suddenly restarted during the assignment.",
        name + " spent hours solving one bug and forgot the deadline.",
        name + "'s keyboard stopped working unexpectedly.",
        name + " accidentally deleted the assignment folder.",
        name + " had a power cut while completing homework.",
        name + "'s system got stuck during Windows update.",
        name + " could not finish because the compiler kept showing errors."
    };

    srand(time(0));

    int randomIndex = rand() % excuses.size();

    cout << "\nGenerated Excuse:\n";
    cout << excuses[randomIndex] << endl;

    return 0;
}
