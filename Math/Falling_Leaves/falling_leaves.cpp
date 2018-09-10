#include <iostream>
#include <vector>

int main() {
    long long int t, c, n;
    std::cin >> t >> c >> n;
    std::vector<long long int> ans(t, 0);
    for (int i = 0; i < n; i++) {
        long long int x, y, s;
        std::cin >> x >> y >> s;
        for (int j = 0; j < t; j++) {
            if ((j * c + x) * s == y * c) {
                ans[j]++;
                break;
            }
        }
    }
    for (int i = 0; i < t; i++) {
        std::cout << ans[i] << std::endl;
    }
    return 0;
}