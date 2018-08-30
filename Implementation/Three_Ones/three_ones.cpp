#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int n, output = 0;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    int t1 = 0, t2 = 0, t3 = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            output = std::max(output, i - t1 + 1);
            t1 = t2;
            t2 = t3;
            t3 = i + 1;
        }
    }
    std::cout << std::max(output, n - t1 + 1) << std::endl;
    return 0;
}