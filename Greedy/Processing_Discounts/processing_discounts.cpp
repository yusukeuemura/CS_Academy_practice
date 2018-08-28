#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main() {
    long n, x, discount = 0;
    std::cin >> n >> x;
    std::vector<std::pair<long, long> > a(n);
    for (int i = 0; i < n; i ++) {
        std::cin >> a[i].first >> a[i].second;
    }
    std::sort(a.begin(), a.end());
    long r = 0;
    for (int i = 0; i < n; i++) {
        if (a[i].first <= x) {
            discount += a[i].second;
        } else if (a[i].first - x < a[i].second + r) {
            x = a[i].first;
            discount += a[i].second + r;
            r = 0;
        } else {
            r += a[i].second;
        }
    }
    std::cout << x - discount << std::endl;
    return 0;
}