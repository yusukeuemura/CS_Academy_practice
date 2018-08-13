#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, min = 101, max = 0, sum = 0;
    std::cin >> n;
    std::vector<int> grades(n);
    for (int i = 0; i < n; i++) {
        std::cin >> grades[i];
        sum += grades[i];
        min = std::min(min, grades[i]);
        max = std::max(max, grades[i]);
    }
    std::cout << (sum - min - max) / (n - 2) << std::endl;
    return 0;
}