#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<double> a(n);
    double mean = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        mean += a[i];
    }
    mean /= n;
    int output = 1000;
    double diff = 100000;
    for (int i = 0; i < n; i++) {
        double tmp = std::abs(mean - a[i]);
        if (tmp < diff) {
            output = i + 1;
            diff = tmp;
        }
    }
    std::cout << output << std::endl;
    return 0;
}