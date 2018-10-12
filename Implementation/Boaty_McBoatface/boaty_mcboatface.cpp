#include <iostream>

int main() {
    int d, t, v1, v2;
    std::cin >> d >> t >> v1 >> v2;
    int output = 0;
    for (int i = 0; i < t; i++) {
        output++;
        d = d - v1 + v2;
        if (d <= 0) {
            std::cout << output << std::endl;
            return 0;
        }
    }
    while (d > 0) {
        output++;
        d = d - v1;
    }
    std::cout << output << std::endl;
    return 0;
}