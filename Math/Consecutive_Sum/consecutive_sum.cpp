#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int min = (n - 1) / 2, max = (n + 1) / 2, sum = (n + 1) / 2;
    while (min > 0) {
        sum += min;
        if (sum == n) {
            std::cout << min << " " << max << std::endl;
            return 0;
        } else if (sum > n) {
            sum -= max + min;
            max--;
            continue;
        }
        min--;
    }
    std::cout << -1 << std::endl;
    return 0;
}