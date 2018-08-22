#include <iostream>
#include <string>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> str(n);
    std::vector<int> check(n, 0);
    for (int i = 0; i < n; i++) {
        std::cin >> str[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::string c = str[i] + str[j];
            for (int k = 0; k < n; k++) {
                if (c == str[k]) {
                    check[k] = 1;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (check[i]) {
            std::cout << i + 1 << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}