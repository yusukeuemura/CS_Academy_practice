#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int> > a(n, std::vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }
    long long int binary = 1;
    for (int i = 0; i < m - 1; i++) {
        binary *= 2;
    }
    for (int i = 0; i < n; i++) {
        if (a[i][0] == 0) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == 0) {
                    a[i][j] = 1;
                } else {
                    a[i][j] = 0;
                }
            }
        }
    }
    for (int i = 1; i < m; i++) {
        int zero = 0;
        for (int j = 0; j < n; j++) {
            if (a[j][i] == 0) {
                zero++;
            }
        }
        if (n - zero < zero) {
            for (int j = 0; j < n; j++) {
                if (a[j][i] == 0) {
                    a[j][i] = 1;
                } else {
                    a[j][i] = 0;
                }
            }
        }
    }
    long long int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum += binary * a[j][i];
        }
        binary /= 2;
    }
    std::cout << sum << std::endl;
    return 0;
}