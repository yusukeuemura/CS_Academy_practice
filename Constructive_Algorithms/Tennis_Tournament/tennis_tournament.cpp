#include <iostream>

int main() {
    int n, k, m;
    std::cin >> n >> k >> m;
    int loser = 1;
    for (int i = 0; i < m; i++) {
        loser *= 2;
    }
    int all = 1;
    for (int i = 0; i < n; i++) {
        all *= 2;
    }
    loser--;
    if (k <= loser || (all == k && loser + 1 < all)) {
        std::cout << -1 << std::endl;
        return 0;
    } else {
        for (int i = 1; i <= loser; i++) {
            std::cout << i << " ";
        }
        std::cout << k << " ";
        for (int i = all; i >= loser + 1; i--) {
            if (i == k) {
                continue;
            } else {
                std::cout << i << " ";
            }
        }
        std::cout << std::endl;
        return 0;
    }
}