#include <iostream>
#include <map>

int main() {
    int n, output = 0;
    std::cin >> n;
    std::map<int, int> a;
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        a[element]++;
    }
    auto itr = a.begin();
    while(++itr != --a.end() && itr != a.end()) {
        output += itr->first * itr->second;
    }
    std::cout << output << std::endl;
    return 0;
}