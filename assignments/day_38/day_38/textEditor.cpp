#include <iostream>
#include <list>
#include <string>

using namespace std;

list<string> lst;
auto cursor = lst.begin();

void addString(const string& str) {
    lst.push_back(str);
    cursor = --lst.end();
}

void moveUp() {
    if (cursor != lst.begin()) {
        --cursor;
    }
    else {
        cout << "Already at the top." << endl;
    }
}

void moveDown() {
    auto nextCursor = next(cursor);
    if (nextCursor != lst.end()) {
        ++cursor;
    }
    else {
        cout << "Already at the bottom." << endl;
    }
}

void display() {
    int index = 0;
    for (const auto& line : lst) {
        if (cursor == next(lst.begin(), index)) {
            cout << "  "; 
        }
        cout << line << endl;
        ++index;
    }
}

int main() {
    int choice;
    string input;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Insert String\n";
        cout << "2. Move Up\n";
        cout << "3. Move Down\n";
        cout << "4. Display List\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // To ignore the newline character left in the buffer

        switch (choice) {
        case 1:
            cout << "Enter a string: ";
            getline(cin, input);
            addString(input);
            break;
        case 2:
            moveUp();
            break;
        case 3:
            moveDown();
            break;
        case 4:
            display();
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
