#include <iostream>

int main() {
    int a, b, r;
    std::cout << "input A" << std::endl;
    std::cin >> a;
    std::cout << "input B" << std::endl;
    std::cin >> b;

    if (a < b) {
        int tmp;
        tmp = a;
        a = b;
        b = tmp;
    }
    while (r = a % b) {
        a = b;
        b = r;
    }

    std::cout << "GCD = " << b << std::endl;
    return 0;
}