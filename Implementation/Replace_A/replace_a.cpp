#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    int preCharIsA = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'B') {
            std::cout << s[i];
            preCharIsA = 0;
        } else if (preCharIsA == 0) {
            std::cout << s[i];
            preCharIsA = 1;
        }
    }
    std::cout << std::endl;
    return 0;
}