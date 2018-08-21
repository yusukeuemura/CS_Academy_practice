#include <iostream>
#include <string>

int main() {
    std::string s, a, b;
    std::cin >> s >> a >> b;
    for (int i = 0; i <= (int)s.size() - (int)a.size(); i++) {
        if (s.substr(i, (int)a.size()) == a) {
            s = s.substr(0, i) + b + s.substr(i + (int)a.size(), s.size());
            i += (int)a.size() - 1;
        } else if (s.substr(i, (int)a.size()) == b) {
            s = s.substr(0, i) + a + s.substr(i + (int)a.size(), s.size());
            i += (int)a.size() - 1;
        }
    }
    std::cout << s << std::endl;
    return 0;
}