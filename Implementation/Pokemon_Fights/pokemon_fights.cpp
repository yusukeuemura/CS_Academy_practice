#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> pokemon(n), results(n, 0);
    for (int i = 0; i < n; i++) {
        std::cin >> pokemon[i];
    }
    int left = 0, right = 1;
    for (int i = 1; i < n; i++) {
        if (pokemon[left] < pokemon[right]) {
            results[right]++;
            left = right;
        } else {
            results[left]++;
        }
        right++;
    }
    for (int i = 0; i < n; i++) {
        std::cout << results[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}