#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int q[4] = {0};
    for (int i = 0; i < n; i++) {
        int x, y;
        std::cin >> x >> y;
        if (x > 0 && y > 0) {
            q[0] = 1;
        } else if (x < 0 && y > 0) {
            q[1] = 1;
        } else if (x < 0 && y < 0) {
            q[2] = 1;
        } else {
            q[3] = 1;
        }
    }
    std::cout << q[0] + q[1] + q[2] + q[3] << std::endl;
    return 0;
}