#include <iostream>

const int MIN = 0;
const int MAX = 1001;

int main() {
    int n;
    std::cin >> n;
    int left = MAX, lowerBound = MAX, right = MIN, upperBound = MIN;
    for (int i = 0; i < n; i++) {
        int x, y;
        std::cin >> x >> y;
        if (x < left) {
            left = x;
        }
        if (x > right) {
            right = x;
        }
        if (y < lowerBound) {
            lowerBound = y;
        }
        if (y > upperBound) {
            upperBound = y;
        }
    }
    std::cout << (right - left) * (upperBound - lowerBound) << std::endl;
    return 0;
}