#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int a, b;
    std::cin >> a >> b;
    std::vector<int> aDigits;
    while (a != 0) {
        aDigits.push_back(a % 10);
        a /= 10;
    }
    std::sort(aDigits.begin(), aDigits.end());
    int output = -1;
    do {
        if (aDigits[0] == 0) {
            continue;
        }
        int perm = 0;
        for (auto itr : aDigits) {
            perm *= 10;
            perm += itr;
        }
        if (perm <= b) {
            output = std::max(output, perm);
        }
    } while (std::next_permutation(aDigits.begin(), aDigits.end()));
    std::cout << output << std::endl;
    return 0;
}