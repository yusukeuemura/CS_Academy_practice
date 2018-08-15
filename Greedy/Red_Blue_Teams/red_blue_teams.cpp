#include <iostream>

int main() {
    int n, r, k, min, max;
    std::cin >> n >> r >> k;
    int b = n - r;
    if (r >= k) {
        min = r - k;
    } else {
        min = k - r;
    }
    if (b >= k) {
        max = r + k;
    } else {
        max = r + 2 * b - k;
    }
    std::cout << min << " " << max << std::endl;
    return 0;
}