#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::vector<int> > b(n, std::vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int a;
            std::cin >> a;
            if (a == 1) {
                b[i][j] = 1;
                b[j][n - i - 1] = 1;
                b[n - i - 1][n - j - 1] = 1;
                b[n - j - 1][i] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << b[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}