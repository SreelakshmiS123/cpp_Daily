#include <iostream>
#include <thread>
using namespace std;

void oneToten() {
    for (int i = 1; i <= 10; i++) {
       cout << i << " ";
    }
   
}

void elevenTotwenty() {
    for (int i = 11; i <= 20; i++) {
        cout << i << " ";
    }
   
}

int main() {
    thread t1(oneToten);
    thread t2(elevenTotwenty);

    t1.join();
    t2.join();

    return 0;
}
