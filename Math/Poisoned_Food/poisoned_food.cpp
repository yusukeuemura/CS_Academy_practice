#include <iostream>

int main() {
    int n;
    double minP = 1, safestFood = 1;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        double t, p;
        std::cin >> t >> p;
        if (minP > p / t) {
            minP = p / t;
            safestFood = i;
        }
    }
    std::cout << safestFood << std::endl;
    return 0;
}