#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    long long a[100000];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::vector<long long> dp(n + 1, 0);
    long long output = a[n - 2] + a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        dp[i] = a[i] + a[i + 1] + dp[i + 2];
        if (output < dp[i]) {
            output = dp[i];
        }
        if (dp[i] < 0) {
            dp[i] = 0;
        }
    }
    std::cout << output << std::endl;
    return 0;
}