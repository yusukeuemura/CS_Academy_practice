#include <iostream>
#include <vector>

int main() {
    int n, m, e = 0;
    std::cin >> n >> m;
    std::vector<int> w(n, 0), v(n + 1, 0), c(n, 0);
    std::vector<std::vector<int> > p(m, std::vector<int>(2, 0));
    for (int i = 0; i < m; i++) {
        int l, r;
        std::cin >> l >> r;
        p[i][0] = --l;
        p[i][1] = --r;
        v[l]++;
        v[r + 1]--;
    }
    w[0] = v[0];
    if (w[0] == 1) {
        c[0]++;
    }
    for (int i = 1; i < n; i++) {
        w[i] = w[i - 1] + v[i];
        if (w[i] == 1) {
            c[i] = c[i - 1] + 1;
        } else {
            c[i] = c[i - 1];
        }
    }
    for (int i = 0; i < n; i++) {
        if (w[i] == 0) {
            e++;
        }
    }
    for (int i = 0; i < m; i++) {
        if (p[i][0] == 0) {
            std::cout << c[p[i][1]] + e << std::endl;
        } else {
            std::cout << c[p[i][1]] - c[p[i][0] - 1] + e << std::endl;
        }
    }
    return 0;
}