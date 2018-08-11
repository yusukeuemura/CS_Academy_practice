#include <iostream>
#include <map>
#include <string>
#include <algorithm>

int main() {
    int n, result = 0;
    std::map<std::string, int> letterNum;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::string letter;
        std::cin >> letter;
        std::sort(letter.begin(), letter.end());
        letterNum[letter]++;
        result = std::max(result, letterNum[letter]);
    }
    std::cout << result << std::endl;
    return 0;
}