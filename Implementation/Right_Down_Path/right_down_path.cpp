#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m, output = 0;
    std::cin >> n >> m;
    std::vector<std::vector<int> > a(n, std::vector<int>(m)), b(n, std::vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = i; k < n; k++) {
                if (a[k][j] == 0) {
                    break;
                }
                b[i][j]++;
            }
        }
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m - 1; j++) {
            if (a[i][j] == 0) {
                continue;
            }
            for (int k = j + 1; k < m; k++) {
                if (a[i][k] == 0) {
                    break;
                }
                if (b[i][k] > 1) {
                    output = std::max(output, k - j + b[i][k]);
                }
            }
        }
    }
    std::cout << output << std::endl;
    return 0;
}