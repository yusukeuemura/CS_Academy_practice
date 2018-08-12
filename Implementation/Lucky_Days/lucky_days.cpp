#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int today, previousLuckyDay = 0, total = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> today;
        if (today > previousLuckyDay) {
            total++;
            previousLuckyDay = today;
        }
    }
    std::cout << total << std::endl;
    return 0;
}