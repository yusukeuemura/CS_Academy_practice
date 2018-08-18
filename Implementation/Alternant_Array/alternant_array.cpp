#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    int odd, even, oddZero = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> odd >> even;
        if (odd == 0) {
            oddZero++;
        }
    } 
    if (oddZero <= n / 2) {
        std::cout << oddZero << std::endl;
    } else {
        std::cout << n - oddZero << std::endl;
    }
    return 0;
}