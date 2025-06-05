#include <iostream>
#include <set>
#include <iterator>

class ScoreTracker {
private:
    std::multiset<int, std::greater<int>> scores;

public:

    void add(int score) {
        scores.insert(score);
    }

   
    void top3() const {
        int count = 0;
        for (auto it = scores.begin(); it != scores.end() && count < 3; ++it, ++count) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
    }

    
    void count(int score) const {
        std::cout << scores.count(score) << std::endl;
    }

    void remove(int score) {
        scores.erase(score);
    }
};

int main() {
    ScoreTracker tracker;

    tracker.add(50);
    tracker.add(70);
    tracker.add(90);
    tracker.add(70);

    tracker.count(70);  
    tracker.top3();    
    tracker.remove(70);
    tracker.top3();    

    return 0;
}
