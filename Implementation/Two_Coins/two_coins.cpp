#include <iostream>
#include <vector>
#include <map>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> coins(n);
    std::map<int, int> amounts;
    for (int i = 0; i < n; i++) {
        std::cin >> coins[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            amounts[coins[i] + coins[j]]++;
        }
    }
    std::cout << amounts.size() << std::endl;
    return 0;
}