#include <iostream>

int main() {
    int x, opr = 0;
    std::cin >> x;
    while (x != 1) {
        if (x == 2) {
            x--;
        } else if (x % 3 == 0) {
            x /= 3;
        } else if (x % 3 == 1) {
            x = --x / 3;
            opr++;
        } else if (x % 3 == 2) {
            x = ++x / 3;
            opr++;
        }
        opr++;
    }
    std::cout << opr << std::endl;
    return 0;
}