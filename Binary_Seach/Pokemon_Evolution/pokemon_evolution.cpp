#include <iostream>

int main() {
    long long n, m, x, y, evolve = 0;
    std::cin >> n >> m >> x >> y;
    long long l = 1, r = n;
    while (l <= r) {
        long long mid = (l + r) / 2;
        if (mid * x <= m + (n - mid) * y) {
            evolve = mid;
            l = ++mid;
        } else {
            r = --mid;
        }
    }
    std::cout << evolve << std::endl;
    return 0;
}