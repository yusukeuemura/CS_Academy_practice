#include <iostream>
#include <map>

int main() {
    int n, output = 0;
    std::cin >> n;
    std::map<int, int> p;
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        p[((element + n) - i - 1) % n]++;
    }
    for (int i = 0; i < n; i++) {
        if (output < p[i]) {
            output = p[i];
        }
    }
    std::cout << output << std::endl;
    return 0;
}