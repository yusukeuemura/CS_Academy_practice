#include <iostream>
#include <string>
#include <map>

int main() {
    int n;
    std::string str;
    std::cin >> n;
    std::cin >> str;
    std::map<char, int> m;
    for (int i = 0; i < n; i++) {
        m[str[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (m[str[i]] == 1) {
            std::cout << str[i] << std::endl;
            return 0;
        }
    }
    std::cout << -1 << std::endl;
    return 0;
}