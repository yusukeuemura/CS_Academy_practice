#include <iostream>
#include <cstdlib>

int main() {
    int n, m, starvePoint = 0;
    int xFirst, yFirst, xSecond, ySecond;
    std::cin >> n >> m;
    std::cin >> xFirst >> yFirst;
    std::cin >> xSecond >> ySecond;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (std::abs(xFirst - i) + std::abs(yFirst - j) 
                    == std::abs(xSecond - i) + std::abs(ySecond - j)) {
                starvePoint++;
            }
        }
    }
    std::cout << starvePoint << std::endl;
    return 0;
}