#include <iostream>
#include <string>

int main() {
    int inputTime = 0;
    std::string str;
    std::cin >> str;
    int v[26];
    for (int i = 0; i < 26; i++) {
        std::cin >> v[i];
    }
    for (int i = 0; i < (int)str.size(); i++) {
        inputTime += v[str[i] - 'a'];
    }
    std::cout << inputTime << std::endl;
    return 0;
}