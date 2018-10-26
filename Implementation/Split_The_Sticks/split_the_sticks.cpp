#include <iostream>
#include <unordered_map>
#include <vector>

std::unordered_map<int, int> sticks;

void pairCheck(int stick) {
    if (sticks[stick] >= 2) {
        sticks[stick] -= 2;
    }
    if (sticks[stick] == 0) {
        sticks.erase(stick);
    }
}

int main() {
    int n;
    std::cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int stick;
        std::cin >> stick;
        sticks[stick]++;
        pairCheck(stick);
        sum += stick;
    }
    if (sum % 2 == 1) {
        std::cout << -1 << std::endl;
        return 0;
    }
    std::vector<std::pair<int, int> > operations;
    while ((int)sticks.size() > 1) {
        int l = sticks.begin()->first;
        sticks[l]--;
        pairCheck(l);
        int x = sticks.begin()->first;
        sticks[x]--;
        pairCheck(x);
        if (l < x) {
            int tmp;
            tmp = l;
            l = x;
            x = tmp;
        }
        sticks[l - x]++;
        pairCheck(l - x);
        operations.push_back({l, x});
    }
    if ((int)sticks.size() == 1) {
        int l = sticks.begin()->first;
        operations.push_back({l, l / 2});
    }
    std::cout << (int)operations.size() << std::endl;
    for (auto itr : operations) {
        std::cout << itr.first << " " << itr.second << std::endl;
    }
    return 0;
}