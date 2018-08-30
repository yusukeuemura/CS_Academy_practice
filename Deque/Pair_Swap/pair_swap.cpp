#include <iostream>
#include <vector>
#include <set>

int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::multiset<std::pair<int, int> > s;
    for (int i = 0; i < k; i++) {
        s.emplace(a[i], -i);
    }
    for (int i = 0; i < n - 1; i++) {
        s.erase({a[i], -i});
        if (i < n - k) {
            s.emplace(a[i + k], - (i + k));
        }
        if (s.begin()->first < a[i]) {
            std::swap(a[i], a[- s.begin()->second]);
            break;
        }
    }
    for (int x : a) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}