#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n, 0);
    std::vector<int> suba(n, 0);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    int p1 = 0, p2 = 1, cur;
    while (p2 < n) {
        if (a[p2 - 1] <= a[p2]) {
            cur = p2 - p1;
            while (p1 < p2) {
                suba[p1] = cur;
                p1++;
            }
        }
        if (p2 == n - 1) {
            cur = p2 - p1 + 1;
            while (p1 <= p2) {
                suba[p1] = cur;
                p1++;
            }
        }
        p2++;
    }
    for (int i = 0; i < n; i++) {
        std::cout << suba[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}