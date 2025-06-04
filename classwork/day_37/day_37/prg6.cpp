//Scoreboard Manager (Using std::vector)
#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cin >> str;

    int freq[10] = { 0 };
    for (char ch : str)
    {
        int digit = ch - '0';
        if (digit >= 0 && digit <= 9)
        {
            freq[digit]++;
        }
    }

    int min = INT_MAX;
    int max = INT_MIN;
    int count = 0;

    for (int i = 0; i < 10; ++i) {
        if (freq[i] > 0) {
            int def_v = i * freq[i];
            min = std::min(min, def_v);
            max = std::max(max, def_v);
            count++;
        }
    }

    if (count == 1) {
        std::cout << max << std::endl;
    }
    else {
        std::cout << max - min << std::endl;
    }

    return 0;
}
