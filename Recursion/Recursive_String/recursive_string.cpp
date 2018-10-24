#include <iostream>

#define MAXN 35
long long len[MAXN + 1];

std::string f(int n, int k) {
    if (n == 0) return "a";
    if (n == 1) return "b";
    if (n == 2) return "c";
    for (int i = 1; i <= 3; i++) {
        if (k <= len[n - i]) {
            return f(n - i, k);
        } else {
            k = k - len[n - i];
        }
    }
    return "-1";
}
int main() {
    int n, k;
    std::cin >> n >> k;
    len[0] = 1;
    len[1] = 1;
    len[2] = 1;
    for (int i = 3; i <= n; i++) {
        len[i] = len[i - 1] + len[i - 2] + len[i - 3];
    }
    if (len[n] < k) {
        std::cout << -1 << std::endl;
        return 0;
    }
    std::string output = f(n, k);
    std::cout << output << std::endl;
    return 0;
}