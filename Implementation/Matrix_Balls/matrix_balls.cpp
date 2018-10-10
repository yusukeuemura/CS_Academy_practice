#include <iostream>

int main() {
    const int MAX = 400000;
    int n, m, a[502][502], ne[502 * 502], ans[502 * 502];
    int dir[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
    std::cin >> n >> m;
    for (int i = 0; i <= m + 1; i++) {
        a[0][i] = MAX;
        a[n + 1][i] = MAX;
    }
    for (int i = 1; i <= n; i++) {
        a[i][0] = MAX;
        a[i][m + 1] = MAX;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            std::cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int nei = i, nej = j;
            for (int k = 0; k < 8; k++) {
                int tx = i + dir[k][0], ty = j + dir[k][1];
                if (a[nei][nej] > a[tx][ty]) {
                    nei = tx;
                    nej = ty;
                }
            }
            ne[i * m + j] = nei * m + nej;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int ansi = i, ansj = j;
            int index = ansi * m + ansj;
            while (index != ne[index]) {
                index = ne[index];
            }
            ans[index]++;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            std::cout << ans[i * m + j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}