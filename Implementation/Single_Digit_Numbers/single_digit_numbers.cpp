#include <iostream>
#include <vector>

const int max = 1e6;

int count(int a) {
    std::vector<int> digits;
    while (a / 10 != 0) {
        digits.push_back(a % 10);
        a /= 10;
    }
    digits.push_back(a);
    int size = (int)digits.size();
    for (int i = 1; i < (int)digits.size(); i++) {
        if (digits[size - 1] < digits[size - 1 - i]) {
            break;
        } else if (digits[size - 1] > digits[size - 1 - i]) {
            digits[size - 1]--;
            break;
        }
    }
    return (9 * (size - 1) + digits[size - 1]);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << count(b) - count(a - 1) << std::endl;
    return 0;
}