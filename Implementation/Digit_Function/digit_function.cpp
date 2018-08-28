#include <iostream>

int f(int x);

int main () {
    int x;
    std::cin >> x;
    std::cout << f(x) << std::endl;
}

int f(int x) {
    if (x == 0) {
        return 1;
    }
    int sumOfDigits = 0;
    for (int i = x; i != 0; i /= 10) {
        sumOfDigits += i % 10;
    }
    if (x == sumOfDigits) {
        return 2;
    } else {
        return 1 + f(x - sumOfDigits);
    }
}