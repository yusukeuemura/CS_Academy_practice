#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main() {
    int n, q;
    std::cin >> n >> q;
    std::vector<std::string> words(n);
    for (auto &itr : words) {
        std::cin >> itr;
    }
    std::sort(words.begin(), words.end());
    std::map<std::string, int> m_words;
    for (int i = 1; i <= n; i++) {
        m_words[words[i - 1]] = i;
    }
    for (int i = 0; i < q; i++) {
        std::string w;
        int x;
        std::cin >> w >> x;
        std::cout << (m_words[w] + x - 1) / x << std::endl;
    }
    return 0;
}