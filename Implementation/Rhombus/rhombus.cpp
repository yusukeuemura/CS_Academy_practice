#include <iostream>
#include <iomanip>

int main() {
    double d1, d2;
    int k;
    std::cin >> d1 >> d2 >> k;
    if (d1 > d2) {
        double tmp = d1;
        d1 = d2;
        d2 = tmp;
    }
    if (d2 - d1 < k) {
        k = k - d2 + d1;
        if (k % 2 == 0) {
            d1 = d2 + k / 2;
            d2 = d1;
        } else {
            d1 = d2 + (k - 1) / 2;
            d2 = d1 + 1;
        }
    } else {
        d1 = d1 + k;
    }
    double output = d1 * d2 / 2;
    std::cout << std::fixed;
    std::cout << std::setprecision(6) << output << std::endl;
    return 0;
}