#include <iostream>
#include <string>

int main() {
    std::string s, p;
    std::getline(std::cin, s);
    std::getline(std::cin, p);
    for (int i = 0; i < (int)s.size(); i++) {
        s[i] = p[s[i] - 'a'];
    }
    std::cout << s << std::endl;
    return 0;
}