#include <iostream>
#include <cmath>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int p[4][2];
        for (int i = 0; i < 4; i++) {
            std::cin >> p[i][0] >> p[i][1];
        }
        double e[6];
        int k = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j < 4; j++) {
                e[k] = std::pow(p[i][0] - p[j][0], 2.0) + std::pow(p[i][1] - p[j][1], 2.0);
                k++;
            }
        }
        std::sort(e, e + 6);
        if (e[0] == e[3] && e[4] == e[5]) {
            std::cout << 1 << std::endl;
        } else {
            std::cout << 0 << std::endl;
        }
    }
    return 0;
}