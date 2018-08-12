#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, sum = 0;
    std::cin >> n;
    std::vector<int> array(n);
    for (int i = 0; i < n; i++) {
        std::cin >> array[i];
    }
    std::sort(array.begin(), array.end());
    for (int i = 0; i < n; i += 2) {
        sum += array[i + 1] - array[i];
    }
    std::cout << sum << std::endl;

    return 0;
}