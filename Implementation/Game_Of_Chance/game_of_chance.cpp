#include <iostream>

int main() {
    int n, a, b, isWon;
    std::cin >> n >> a >> b;
    for (int i = 0; i < n; i++) {
        std::cin >> isWon;
        a += isWon;
    }
    for (int i = 0; i < n; i++) {
        std::cin >> isWon;
        b += isWon;
    }
    if (a > b) {
        std::cout << 1 << std::endl;
    } else if (b > a) {
        std::cout << 2 << std::endl;
    } else {
        std::cout << 0 << std::endl;
    }
     return 0;
}