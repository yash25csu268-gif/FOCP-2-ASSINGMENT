#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    vector<string> roasts = {
        name + "'s code runs so slowly that even a turtle switched to Python.",
        "If procrastination were an Olympic sport, " + name + " would win gold.",
        name + " doesn't debug code — they negotiate with bugs.",
        name + "'s typing speed is slower than Windows update.",
        "Even calculator apps feel smarter than " + name + ".",
        name + " writes comments more than actual code.",
        name + "'s WiFi disconnects out of embarrassment.",
        "Google searches " + name + "'s errors before fixing them.",
        name + " once spent 2 hours fixing a missing semicolon.",
        name + "'s coding style is pure chaos."
    };

    srand(time(0));

    int randomIndex = rand() % roasts.size();

    cout << "\nRoast:\n";
    cout << roasts[randomIndex] << endl;

    return 0;
}
