#include <iostream>
#include <set>
#include <string>

using namespace std;

set<int> prices;

void addPrice(int price) {
    auto result = prices.insert(price);
    if (result.second) {
        cout << price << " added" << endl;
    }
    else {
        cout << price << " already exists" << endl;
    }
}

void removePrice(int price) {
    size_t erased = prices.erase(price);
    if (erased > 0) {
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

void display() {
    if (!prices.empty()) {
        cout << "Current prices: ";
        for (const auto& price : prices) {
            cout << price << " ";
        }
        cout << endl;
    }
    else {
        cout << "No prices available" << endl;
    }
}

int main() {
    string command;
    int price;

    cout << "Commands:\n";
    cout << "ADD <price> - Add a price\n";
    cout << "REMOVE <price> - Remove a price\n";
    cout << "MINMAX - Display min and max prices\n";
    cout << "DISPLAY - Show all prices\n";
    cout << "EXIT - Exit the program\n";

    while (true) {
        cout << "\nEnter command: ";
        getline(cin, command);

        if (command.substr(0, 3) == "ADD") {
            try {
                price = stoi(command.substr(4));
                addPrice(price);
            }
            catch (const invalid_argument&) {
                cout << "Invalid price format" << endl;
            }
        }
        else if (command.substr(0, 6) == "REMOVE") {
            try {
                price = stoi(command.substr(7));
                removePrice(price);
            }
            catch (const invalid_argument&) {
                cout << "Invalid price format" << endl;
            }
        }
        else if (command == "MINMAX") {
            minMax();
        }
        else if (command == "DISPLAY") {
            display();
        }
        else if (command == "EXIT") {
            break;
        }
        else {
            cout << "Unknown command" << endl;
        }
    }

    return 0;
}
