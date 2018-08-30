#include <iostream>

int main() {
    int s, output = 4;
    for (int i = 0; i < 4; i++) {
        std::cin >> s;
    }
    for (int i = 0; i < 12; i++) {
        int t;
        std::cin >> t;
        if (s - t < 300) {
            output++;
        } else {
            break;
        }
    }
    std::cout << output << std::endl;
    return 0;
}