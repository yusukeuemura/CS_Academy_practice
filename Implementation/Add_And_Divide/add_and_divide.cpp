#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int output = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n++;
        }
        output++;
    }
    std::cout << output << std::endl;
    return 0;
}