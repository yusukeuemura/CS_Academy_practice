#include <iostream>
#include <algorithm>

int main() {
    int openTime, minOpenTime = 101, totalTime = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> openTime;
            minOpenTime = std::min(minOpenTime, openTime);
        }
        totalTime += minOpenTime;
        minOpenTime = 101;
    }
    std::cout << totalTime << std::endl;
    return 0;
}