#include <iostream>
#include <vector>
#include <algorithm>

int count(std::vector<int> &a, int v) {
    int ret = v;
    for (auto &itr : a) {
        if (itr <= v) {
            ret--;
        }
    }
    return ret;
}

int main() {
    int n;
    int m;
    std::cin >> n >> m;
    std::vector<int> a(n);
    for (auto &itr : a) {
        std::cin >> itr;
    }
    
    int v = 0;
    for (int i = 30; i >= 0; i--) {
        int tmp = count(a, v + (1 << i));
        if (tmp < m) {
            v += (1 << i);
        }
    }

    v++;

    long long int sum = 1LL * v * (v + 1) / 2;
    for (auto &itr : a) {
        if (itr <= v) {
            sum -= itr;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}