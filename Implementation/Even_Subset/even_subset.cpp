#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    long long output = 0;
    std::cin >> n;
    std::vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end(), std::greater<long long>());
    for (int i = 0; i < n / 2; i++) {
        if (a[2 * i + 1] + a[2 * i] > 0) {
            output += a[2 * i] + a[2 * i + 1];
        } else {
            break;
        }
    }
    std::cout << output << std::endl;
    return 0;
}