#include <iostream>
#include <list>
#include <string>

class TaskManager {
private:
    std::list<std::string> tasks;

public:

    void add(const std::string& task) {
        tasks.push_back(task);
    }

    void urgent(const std::string& task) {
        tasks.push_front(task);
    }

   
    void remove(const std::string& task) {
        tasks.remove(task);
    }

    void show() const {
        if (tasks.empty()) {
            std::cout << "No tasks available.\n";
            return;
        }
        for (const auto& task : tasks) {
            std::cout << task << "\n";
        }
    }
};

int main() {
    TaskManager manager;

    manager.add("pull origin");
    manager.add("push to GIT");
    manager.urgent("Critical: Update server");

    std::cout << "Task List:\n";
    manager.show();

    manager.remove("pull origin");

    std::cout << "\nUpdated Task List:\n";
    manager.show();

    return 0;
}
