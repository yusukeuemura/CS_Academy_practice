#include <iostream>
#include <map>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::map<long long, long long> s;
    for (int i = 0; i < n; i++) {
        long long a, b;
        std::cin >> a >> b;
        s[a] = b;
    }
    long long output = 0;
    auto itr = s.begin();
    for (int i = 0; i < n - 1; i++) {
        long long left = itr->second;
        itr++;
        long long right = itr->first;
        output += std::min(i + 1, n - i - 1) * (right - left);
    }
    std::cout << output << std::endl;
    return 0;
}