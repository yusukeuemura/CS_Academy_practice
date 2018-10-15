#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    int n, t;
    std::cin >> n >> t;
    std::unordered_map<int, int> ducks;
    for (int i = 0; i < n; i++) {
        int duck;
        std::cin >> duck;
        ducks[duck]++;
    }
    std::vector<int> quacks(t + 1, 0);
    for (auto itr : ducks) {
        for (int j = itr.first; j <= t; j += itr.first) {
            quacks[j] += itr.second;
        }
    }
    long long maxQuacks = 0, sumQuacks = 0;
    for (int i = 1; i <= t; i++) {
        if (maxQuacks < quacks[i]) {
            maxQuacks = quacks[i];
        }
    }
    for (int i = 1; i <= t; i++) {
        if (quacks[i] == maxQuacks) {
            sumQuacks++;
        }
    }
    std::cout << maxQuacks << " " << sumQuacks << std::endl;
    return 0;
}