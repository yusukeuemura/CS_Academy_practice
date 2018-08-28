#include <iostream>

int main() {
    int n, output = 1000000;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b, c;
        std::cin >> a >> b >> c;
        if (a < b) {
            c += b;
        } else {
            c += a;
        }
        if (c < output) {
            output = c;
        }
    }
    std::cout << output << std::endl;
    return 0;
}