#include <iostream>

int main() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::cout << s[n - 1] << std::endl;
    return 0;
}