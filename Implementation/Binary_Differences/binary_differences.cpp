#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    int maxCost = 0;
    int minCost = 0;
    int maxSum = 0;
    int minSum = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int bit;
        std::cin >> bit;
        if (bit == 0) {
            sum++;
        } else {
            sum--;
        }
        minCost = std::min(minCost, sum - maxSum);
        maxCost = std::max(maxCost, sum - minSum);
        minSum = std::min(minSum, sum);
        maxSum = std::max(maxSum, sum);
    }
    std::cout << maxCost - minCost + 1 << std::endl;
    return 0;
}