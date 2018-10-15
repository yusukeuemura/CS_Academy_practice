#include <iostream>

int main() {
    int n, x;
    std::cin >> n >> x;
    int output = n + 1;
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        if (x < element) {
            output = i + 1;
            break;
        }
    }
    std::cout << output << std::endl;
}