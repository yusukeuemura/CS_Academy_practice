#include <iostream>

int main() {
    int n;
    int isBalanced = 0;
    int c[10] = {0};
    std::cin >> n;
    if (n == 0) {
        std::cout << 0 << std::endl;
        return 0;
    }
    while (n != 0) {
        c[n % 10]++;
        n /= 10;
    }
    for (int i = 1; i < 10; i++) {
        if (c[0] == c[i]) {
            isBalanced = 1;
        } else {
            isBalanced = 0;
            break;
        }
    }
    std::cout << isBalanced << std::endl;

    return 0;
}