#include <iostream>

int main () {
    int dance[9] = {0, 0, 0, 0, 1, -1, 1, 1, 1};
    int n, p, t;
    std::cin >> n >> p >> t;
    int last = 1;
    last += t / 9 * 3;
    for (int i = 0; i < t % 9; i++) {
        last += dance[i];
    }
    int output = -1;
    if (last <= p && p <= n + last - 1) {
        output = p - last + 1;
    }
    std::cout << output << std::endl;
    return 0;
}