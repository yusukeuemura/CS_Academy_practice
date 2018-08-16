#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, k, isGreaterThanK = 1, anomalies = 0;
    std::cin >> n >> k;
    std::vector<int> array(n);
    for (int i = 0; i < n; i++) {
        std::cin >> array[i];
    }
    std::sort(array.begin(), array.end());
    for (int i = 0; i < n - 1; i++) {
        if (array[i + 1] - array[i] > k) {
            if (isGreaterThanK == 1) {
                anomalies++;
            } else {
                isGreaterThanK = 1;
            }
        } else {
            isGreaterThanK = 0;
        }
    }
    if (isGreaterThanK == 1) {
        anomalies++;
    }
    std::cout << anomalies << std::endl;
    return 0;
}