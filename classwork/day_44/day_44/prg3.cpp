#include <iostream>
#include <thread>

void backgroundTask(int& a) {
    a += 5;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Background task done." << std::endl;
}

int main() {
    int a = 1;
    std::thread t(backgroundTask,std::ref(a));
    t.detach(); // Main won't wait
    std::cout << "Main is not blocked.\n";
 
    std::this_thread::sleep_for(std::chrono::seconds(5)); // Wait to see output
    std::cout << a << std::endl;
    return 0;
}