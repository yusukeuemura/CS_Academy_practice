#include <iostream>

long long god (long long a) {
    if (a == 1) {
        return 1;
    } else if (a == 0) {
        return 0;
    } else if (a % 2 == 0) {
        long long sumOdd = a / 2;
        return god(a / 2) + sumOdd * sumOdd;
    } else {
        long long sumOdd = (a + 1) / 2;
        return god((a - 1) / 2) + sumOdd * sumOdd;
    }
}

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        long long output = 0;
        long long a, b;
        std::cin >> a >> b;
        output = god(b) - god(a - 1);
        std::cout << output << std::endl;
    }
    return 0;
}