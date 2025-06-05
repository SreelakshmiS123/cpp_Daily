#include <iostream>
#include <set>
using namespace std;

set<int> bookedSlots;

void bookSlot(int hour) {
    auto result = bookedSlots.insert(hour);
    if (result.second) {
        cout << "Booked: " << hour << endl;
    }
    else {
        cout << "Already Booked" << endl;
    }
}

void checkSlot(int hour) {
    if (bookedSlots.count(hour)) {
        cout << "Booked: " << hour << endl;
    }
    else {
        cout << "Free" << endl;
    }
}

int main() {
    bookSlot(10);
    bookSlot(14);
    bookSlot(10);  // Duplicate
    checkSlot(11);
    bookSlot(11);

    return 0;
}
