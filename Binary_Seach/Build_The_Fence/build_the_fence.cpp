#include <iostream>
#include <vector>

int main() {
    int n;
    long long k, l = 1, r = 1e9, mid = 1, output = 1, sum = 0ll;
    std::cin >> n >> k;
    std::vector<long long> woodenBoard(n);
    for (int i = 0; i < n; i++) {
        std::cin >> woodenBoard[i];
        sum += woodenBoard[i];
    }
    if (sum < k) {
        std::cout << 0 << std::endl;
        return 0;
    }
    while (l < r) {
        mid = (l + r + 1) / 2;
        long long fence = 0ll;
        for (int i = 0; i < n; i++) {
            fence += woodenBoard[i] / mid;
        }
        if (fence >= k) {
            output = mid;
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    std::cout << output << std::endl;
    return 0;
}