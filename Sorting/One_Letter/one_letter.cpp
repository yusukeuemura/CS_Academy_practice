#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<char> output(n);
    for (int i = 0; i < n; i++) {
        std::string input;
        std::cin >> input;
        sort(input.begin(), input.end());
        output[i] = input[0];
    }
    sort(output.begin(), output.end());
    for (int i = 0; i < n; i++) {
        std::cout << output[i];
    }
    std::cout << std::endl;
    return 0;
}