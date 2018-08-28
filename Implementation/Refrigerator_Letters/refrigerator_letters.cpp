#include <iostream>
#include <string>
#include <map>

int main() {
    int n, output = 0;
    std::cin >> n;
    std::map<char, int> magnet;
    for (int i = 0; i < n; i++) {
        char l;
        std::cin >> l;
        magnet[l]++;
    }
    std::string s;
    std::cin >> s;
    for (int i = 0; s[i] != '\0'; i++) {
        if (magnet[s[i]]) {
            magnet[s[i]]--;
        } else {
            output++;
        }
    }
    std::cout << output << std::endl;
    return 0;
}