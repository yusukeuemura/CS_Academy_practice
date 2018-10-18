#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string seats;
    std::cin >> seats;
    std::vector<int> ones = {0};
    int zero = 0;
    for (int i = 0; i < (int)seats.size(); i++) {
        if (seats[i] == '1') {
            ones.push_back(i + 1);
        } else {
            zero++;
        }
    }
    ones.push_back((int)seats.size() + 1);
    int output = 0;
    for (int i = 1; i < (int)ones.size() - 1; i++) {
        int tmp = ones[i + 1] - ones[i - 1] - 1;
        if (output < tmp) {
            output = tmp;
        }
    }
    if (zero < output) {
        output = zero;
    }
    std::cout << output << std::endl;
    return 0;
}