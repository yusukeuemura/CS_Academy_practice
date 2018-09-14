#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>

int main() {
    int n;
    long long travelDistance = 0;
    std::cin >> n;
    std::map<long long , int> map;
    for (int i = 0; i < n; i++) {
        long long number;
        std::cin >> number;
        map[number] = i;
    }
    auto itr = map.begin();
    for (int i = 0; i < n - 1; i++) {
        int current = itr->second;
        int next = (++itr)->second;
        travelDistance += std::min(std::abs(next - current), n - std::abs(next - current));
    }
    std::cout << travelDistance << std::endl;
    return 0;
}