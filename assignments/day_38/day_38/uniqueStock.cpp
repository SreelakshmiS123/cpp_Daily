#include <iostream>
#include <set>
using namespace std;

multiset<int> prices;

void addPrice(int price) {
    prices.insert(price);
    cout << price << " added" << endl;
}

void removePrice(int price) {
    auto it = prices.find(price);
    if (it != prices.end()) {
        prices.erase(it);
        cout << price << " removed" << endl;
    }
    else {
        cout << price << " not found" << endl;
    }
}

void minMax() {
    if (!prices.empty()) {
        cout << *prices.begin() << " " << *prices.rbegin() << endl;
    }
    else {
        cout << "No prices available" << endl;
    }
}

int main() {
    addPrice(310);
    addPrice(330);
    addPrice(400);
    removePrice(330);
    removePrice(310);

    return 0;
}
