#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int k, n, sum = 0;
    std::cin >> n >> k;
    std::vector<int> glasses(n);
    for (int i = 0; i < n; i++) {
        std::cin >> glasses[i];
    }
    std::sort(glasses.begin(), glasses.end());
    for (int i = 0; i < k; i++) {
        sum += glasses[i];
    }
    std::cout << (int)(sum + 99)/100 << std::endl;
    return 0;
}