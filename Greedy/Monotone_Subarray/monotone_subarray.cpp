#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, status = 0, monotone = 1, max = 0, equal = 1;
    std::cin >> n;
    std::vector<int> a(n);
    std::cin >> a[0];
    for (int i = 1; i < n; i++) {
        std::cin >> a[i];
        if (status == 0) {
            if (a[i - 1] > a[i]) {
                status = 1;
            } else if (a[i - 1] < a[i]) {
                status = 2;
            } else {
                equal++;
            }
            max = std::max(max, ++monotone);
        } else if (status == 1) {
            if (a[i - 1] < a[i]) {
                status = 2;
                monotone = equal + 1;
                equal = 1;
            } else if (a[i - 1] == a[i]) {
                equal++;
                max = std::max(max, ++monotone);
            } else {
                equal = 1;
                max = std::max(max, ++monotone);
            }
        } else if (status == 2) {
            if (a[i - 1] > a[i]) {
                status = 1;
                monotone = equal + 1;
                equal = 1;
            } else if (a[i - 1] == a[i]) {
                equal++;
                max = std::max(max, ++monotone);
            } else {
                equal = 1;
                max = std::max(max, ++monotone);
            }
        }
    }
    std::cout << max << std::endl;
    return 0;
}