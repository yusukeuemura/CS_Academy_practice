#include <iostream>

int main() {
    std::string s;
    std::cin >> s;
    int output = 1;
    for (int i = 0; i < s.length();  i++) {
        static int isD = 2;
        if (isD == 0) {
            if (s[i] == 'd') {
                output *= 10;
                isD = 1;
            } else {
                output *= 25;
            }
        } else if (isD == 1) {
            if (s[i] == 'd') {
                output *= 9;
            } else {
                output *= 26;
                isD = 0;
            }
        } else {
            if (s[i] == 'd') {
                output *= 10;
                isD = 1;
            } else {
                output *= 26;
                isD = 0;
            }
        }
    }
    std::cout << output << std::endl;
    return 0;
}