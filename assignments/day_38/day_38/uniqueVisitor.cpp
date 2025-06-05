//Unique Visitor Tracker
//An online platform wants to track unique users visiting the site.User IDs are integers.
#include <iostream>
#include <set>
#include <string>

int main() {
    std::set<int> visitors;  

    std::string command;
    while (std::cin >> command) {
        if (command == "VISIT") {
            int user_id;
            std::cin >> user_id;
            visitors.insert(user_id); 
        }
        else if (command == "UNIQUE") {
            std::cout << visitors.size() << std::endl;
        }
        else if (command == "TOP") {
            for (int id : visitors) {
                std::cout << id << " ";  
            }
            std::cout << std::endl;
        }
    }

    return 0;
}
