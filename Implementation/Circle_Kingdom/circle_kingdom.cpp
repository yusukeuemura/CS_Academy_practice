#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    int d[5000] = {0}, d_sum = 0;
    for (int i = 0; i < n; i++) {
        int di;
        std::cin >> di;
        d[i] = d_sum + di;
        d_sum = d[i];
    }
    int output;
    for (int i = 0; i < n; i++) {
        static int dc = 1000000000;
        int dci = 0;
        for (int j = 0; j < n; j++) {
            int dij;
            if (i == j) {
                continue;
            } else if (i < j) {
                dij = std::min(d[j] - d[i], d_sum - d[j] + d[i]);
            } else {
                dij = std::min(d[i] - d[j], d_sum - d[i] + d[j]);
            }
            if (dci < dij) {
                dci = dij;
            }
        }
        if (dci < dc) {
            dc = dci;
            output = (i + 2) % n;
        }
    }
    std::cout << output << std::endl;
    return 0;
}