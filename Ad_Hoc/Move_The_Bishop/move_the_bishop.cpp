#include <iostream>
#include <cstdlib>

int main() {
    int r1, c1, r2, c2;
    std::cin >> r1 >> c1 >> r2 >> c2;
    if (r1 == r2 && c1 == c2) {
        std::cout << 0 << std::endl;
        return 0;
    } else if (std::abs(r1 - r2) == std::abs(c1 - c2)) {
        std::cout << 1 << std::endl;
        return 0;
    }
    for (int i = 1; i < 8; i++) {
        if (r1 - i > 0) {
            if (c1 - i > 0) {
                if (std::abs(r1 - r2 - i) == std::abs(c1 - c2 - i)) {
                    std::cout << 2 << std::endl;
                    return 0;
                }
            }
            if (c1 + i <= 8) {
                if (std::abs(r1 - r2 - i) == std::abs(c1 - c2 + i)) {
                    std::cout << 2 << std::endl;
                    return 0;
                }
            }
        }
        if (r1 + i <= 8) {
            if (c1 - i > 0) {
                if (std::abs(r1 - r2 + i) == std::abs(c1 - c2 - i)) {
                    std::cout << 2 << std::endl;
                    return 0;
                }
            }
            if (c1 + i <= 8) {
                if (std::abs(r1 - r2 + i) == std::abs(c1 - c2 + i)) {
                    std::cout << 2 << std::endl;
                    return 0;
                }
            }
        }
    }
    std::cout << -1 << std::endl;
    return 0;
}