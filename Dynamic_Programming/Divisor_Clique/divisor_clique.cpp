#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, output = 0;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    std::vector<int> dp(n);
    for (int i = 0; i < n; i++) {
        int tmp = 0;
        for (int j = 0; j < i; j++) {
            if (a[i] % a[j] == 0) {
                tmp = std::max(tmp, dp[j]);
            }
        }
        dp[i] = tmp + 1;
    }
    for (int i = 0; i < n; i++) {
        output = std::max(output, dp[i]);
    }
    std::cout << output << std::endl;
    return 0;
}