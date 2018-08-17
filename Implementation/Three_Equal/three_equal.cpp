#include <iostream>

int main() {
    int n, output;
    std::cin >> n;
    int r[3] = {0};
    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        r[(a + 1) % 3]++;
        r[(a + 2) % 3] += 2;
    }
    if (r[0] < r[1]) {
        if (r[0] < r[2]) {
            output = r[0];
        } else {
            output = r[2];
        }
    } else {
        if (r[1] < r[2]) {
            output = r[1];
        } else {
            output = r[2];
        }
    }
    std::cout << output << std::endl;
    return 0;
}