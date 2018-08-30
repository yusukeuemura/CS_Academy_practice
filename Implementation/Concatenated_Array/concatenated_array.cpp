#include <iostream>
#include <string>
#include <algorithm>

int main() {
    long long n, k;
    std::cin >> n >> k;
    std::string s;
    std::cin >> s;
    long long output = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            count++;
        } else {
            break;
        }
    }
    if (count == n) {
        std::cout << n * k << std::endl;
        return 0;
    } else {
        output = count;
        long long first = count;
        for (int i = count; i < n; i++) {
            if (s[i] == '0') {
                count++;
            } else {
                output = std::max(output, count);
                count = 0;
            }
        }
        if (k == 1) {
            std::cout << std::max(output, count) << std::endl;
        } else {
            std::cout << std::max(output, first + count) << std::endl;
        }
        return 0;
    }
}