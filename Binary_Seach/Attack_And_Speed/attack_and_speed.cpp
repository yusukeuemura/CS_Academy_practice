#include <iostream>
#include <math.h>

int main() {
    long long int a, s, k, x, y, dollarsForA;
    std::cin >> a >> s >> k >> x >> y;

    dollarsForA = s + k*y - a;
    if (dollarsForA % (x + y) != 0) {
        std::cout << -1 << std::endl;
    } else {
        std::cout << dollarsForA / (x + y) << std::endl;
    }

    return 0;
}