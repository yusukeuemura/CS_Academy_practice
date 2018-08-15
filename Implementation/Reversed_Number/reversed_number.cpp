#include <iostream>
#include <string>

int main() {
    std::string x;
    std::cin >> x;
    for (int i = 0; i < (int)x.size(); i++) {
        if (x[i] < x[(int)x.size() - i - 1]) {
            std::cout << 1 << std::endl;
            break;
        } else if (x[(int)x.size() - i - 1] < x[i]) {
            std::cout << 0 << std::endl;
            break;
        } else if (i == (int)x.size() - 1) {
            std::cout << 0 << std::endl;
            break;
        }
    }
    return 0;
}