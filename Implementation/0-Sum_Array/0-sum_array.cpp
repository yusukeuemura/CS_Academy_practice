#include <iostream>
#include <vector>

int main() {
    int n, output = -1;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }
            sum += a[j];
        }
        if (sum == a[i]) {
            output = i + 1;
            break;
        }
    }
    std::cout << output << std::endl;
    return 0;
}