#include <iostream>

int main() {
    int k;
    std::cin >> k;
    int i = 1;
    for (int count = 0; count < k; i++) {
        int cmp = i;
        int previousBit = 0;
        bool isBadNumber = false;
        while (cmp > 0) {
            int lsb = cmp & 1;
            if (lsb == 1 && previousBit == 1) {
                isBadNumber = true;
                break;
            } else if (lsb == 1) {
                previousBit = 1;
            } else {
                previousBit = 0;
            }
            cmp = cmp >> 1;
        }
        if (isBadNumber == false) {
            count++;
        }
    }
    i--;
    std::cout << i << std::endl;
    return 0;
}