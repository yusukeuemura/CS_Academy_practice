#include <iostream>
#include <vector>

int main() {
    int n, e1, e2, c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    std::cin >> n >> e1 >> e2;
    for (int i = 0; i < n; i++) {
        int a, b, fu = 0, fd = 0, su = 0, sd = 0;
        std::cin >> a >> b;
        if (e1 <= a && a < b) {
            fu = 1;
        } else if (b < a && a <= e1) {
            fd = 1;
        }
        if (e2 <= a && a < b) {
            su = 1;
        } else if (b < a && a <= e2) {
            sd = 1;
        }
        c1 += fu | su;
        c2 += fu | sd;
        c3 += fd | su;
        c4 += fd | sd;
    }
    if (c1 < c2) {
        c1 = c2;
    }
    if (c1 < c3) {
        c1 = c3;
    }
    if (c1 < c4) {
        c1 = c4;
    }
    std::cout << c1 << std::endl;
    return 0;
}
