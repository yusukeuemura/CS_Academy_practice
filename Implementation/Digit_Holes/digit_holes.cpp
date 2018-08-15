#include <iostream>

int main() {
    int a, b, maxHole = 0;
    std::cin >> a >> b;
    int output = a;
    for (int i = a; i <= b; i++) {
        int tmp = i;
        if (tmp == 0) {
            maxHole = 1;
            output = 0;
            continue;
        }
        int tmpHole = 0;
        while (tmp != 0) {
            int r = tmp % 10;
            if (r == 0 || r == 6 || r == 9) {
                tmpHole++;
            } else if (r == 8) {
                tmpHole += 2;
            }
            tmp /= 10;
        }
        if (maxHole < tmpHole) {
            output = i;
            maxHole = tmpHole;
        }
    }
    std::cout << output << std::endl;
    return 0;
}