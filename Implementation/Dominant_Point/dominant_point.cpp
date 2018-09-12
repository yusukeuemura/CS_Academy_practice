#include <iostream>

int main() {
    int n, max_x = 0, max_y = 0, index_x = 0, index_y = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        std::cin >> x >> y;
        if (max_x < x) {
            max_x = x;
            index_x = i;
        }
        if (max_y < y) {
            max_y = y;
            index_y = i;
        }
    }
    if (index_x == index_y) {
        std::cout << index_x + 1 << std::endl;
    } else {
        std::cout << -1 << std::endl;
    }
    return 0;
}