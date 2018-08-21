#include <iostream>

int main() {
    int n, w, sumWidth = 0, output = 1;
    std::cin >> n >> w;
    for (int i = 0; i < n; i++) {
        int isFree, width;
        std::cin >> isFree >> width;
        if (isFree) {
            sumWidth += width;
            if (sumWidth >= w) {
                std::cout << output << std::endl;
                return 0;
            }
        } else {
            sumWidth = 0;
            output = i + 2;
        }
    }
    std::cout << -1 << std::endl;
    return 0;
}