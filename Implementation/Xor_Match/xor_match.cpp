#include <iostream>
#include <vector>

int main() {
    int n, m, output = 0;
    std::cin >> n >> m;
    std::vector<char> a(n);
    std::vector<char> b(m);
    for (int i = 0; i < n; i++) {
        char elementOfA;
        std::cin >> elementOfA;
        a[i] = elementOfA ^ 1;
    }
    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }
    for (int i = 0; i <= m - n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[j] != b[j + i]) {
                break;
            } else if (j == n - 1) {
                output++;
            }
        }
    }
    std::cout << output << std::endl;
    return 0;
}