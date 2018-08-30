#include <iostream>

int main() {
    int n, output;
    std::cin >> n;
    n %= 10;
    if (n == 0) {
        output = 4;
    } else if (n % 3 == 0) {
        output = 3;
    } else {
        output = n % 3;
    }
    std::cout << output << std::endl;
    return 0;
}