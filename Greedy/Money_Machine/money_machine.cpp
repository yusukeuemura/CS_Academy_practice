#include <iostream>

int main() {
    int n, c, x1, u, x2;
    std::cin >> n >> c >> x1 >> u >> x2;
    for (int i = 0; i < n; i++) {
        if (c >= u && u <= x2 * (n - i)) {
            x1 += x2;
            c -= u;
        }
        c += x1;
    }
    std::cout << c << std::endl;
    return 0;
}