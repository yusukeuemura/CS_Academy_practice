#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m, aWin = 0, bWin = 0;
    std::cin >> n >> m;
    std::vector<int> outcomeOfA(n), outcomeOfB(m);
    for (int i = 0; i < n; i++) {
        std::cin >> outcomeOfA[i];
    }
    for (int i = 0; i < m; i++) {
        std::cin >> outcomeOfB[i];
    }
    std::sort(outcomeOfA.begin(), outcomeOfA.end());
    std::sort(outcomeOfB.begin(), outcomeOfB.end());
    for (int i = 0; i < std::min(n, m); i++) {
        if (outcomeOfA[n - i - 1] > outcomeOfB[m - i - 1]) {
            aWin++;
        } else {
            bWin++;
        }
    }
    std::cout << aWin << " " << bWin << std::endl;
    return 0;
}