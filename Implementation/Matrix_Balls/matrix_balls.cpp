#include <iostream>
#include <map>
#include <chrono>

int main() {
    const int MAX = 400000;
    int n, m, a[502][502] = {0};
    std::cin >> n >> m;
    std::map<int, int> ne, balls;
    for (int i = 0; i <= m + 1; i++) {
        a[0][i] = MAX;
        a[n + 1][i] = MAX;
    }
    for (int i = 1; i <= n; i++) {
        a[i][0] = MAX;
        a[i][m + 1] = MAX;
    }
    for (int i = 1; i<= n; i++) {
        for (int j = 1; j <= m; j++) {
            std::cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int tmp = a[i][j];
            ne[tmp] = tmp;
            for (int k = i - 1; k <= i + 1; k++) {
                for (int l = j - 1; l <= j + 1; l++) {
                    if (ne[tmp] > a[k][l]) {
                        ne[tmp] = a[k][l];
                    }
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int tmp = a[i][j];
            while (ne[tmp] != tmp) {
                tmp = ne[tmp];
            }
            balls[tmp]++;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            std::cout << balls[a[i][j]] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}