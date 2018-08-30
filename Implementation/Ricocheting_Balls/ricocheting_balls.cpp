#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<long long> h(n);
    for (int i = 0; i < n; i++) {
        std::cin >> h[i];
    }
    std::sort(h.begin(), h.end());
    long long m = h[(n - 1) / 2];
    long long output = 0;
    for (int i = 0; i < n; i++) {
        output += std::abs(h[i] - m);
    }
    std::cout << output << std::endl;
    return 0;
}