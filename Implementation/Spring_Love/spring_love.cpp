#include <iostream>

int main() {
    int n, p, sumP = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> p;
        sumP += p;
    }
    std::cout << sumP % 2 << std::endl;
    return 0;
}