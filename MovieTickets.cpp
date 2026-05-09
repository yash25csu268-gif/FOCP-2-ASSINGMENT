#include <iostream>
#include <map>
#include <set>
using namespace std;

class MovieTicket {
    map<int, set<int>> bookings;
    map<int, int> bookedCount;

public:
    bool BOOK(int userId, int movieId) {
        if (bookings[movieId].count(userId) || bookedCount[movieId] >= 100)
            return false;

        bookings[movieId].insert(userId);
        bookedCount[movieId]++;
        return true;
    }

    bool CANCEL(int userId, int movieId) {
        if (!bookings[movieId].count(userId))
            return false;

        bookings[movieId].erase(userId);
        bookedCount[movieId]--;
        return true;
    }

    bool IS_BOOKED(int userId, int movieId) {
        return bookings[movieId].count(userId);
    }

    int AVAILABLE_TICKETS(int movieId) {
        return 100 - bookedCount[movieId];
    }
};

int main() {
    MovieTicket m;

    cout << m.BOOK(1, 101) << endl;
    cout << m.IS_BOOKED(1, 101) << endl;
    cout << m.AVAILABLE_TICKETS(101) << endl;
    cout << m.CANCEL(1, 101) << endl;

    return 0;
}
