#include <iostream>
#include <algorithm>

int main() {
    int n, min = 1, max = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        static int c = 0;
        int t, x;
        std::cin >> t >> x;
        t ? c -= x : c += x;
        min = std::min(min, c);
        max = std::max(max, c);
    }
    if (min < 0) {
        max -= min;
    }
    std::cout << max << std::endl;
    return 0;
}