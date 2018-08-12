#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> words(n);
    std::map<std::string, int> wordsOrder;
    for (int i = 0; i < n; i++) {
        std::cin >> words[i];
        wordsOrder[words[i]] = i;
    }
    std::sort(words.begin(), words.end());
    for (int i = 0; i < n; i++) {
        std::cout << wordsOrder[words[i]] + 1 << " ";
    }
    std::cout << std::endl;
    return 0;
}