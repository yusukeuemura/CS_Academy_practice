#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>

std::map<char, int> m;

inline bool cmp(const std::string &a, const std::string &b) {
    for (int i = 0; i < (int)a.size() && i < (int)b.size(); i++) {
        if (m[a[i]] < m[b[i]]) {
            return true;
        } else if (m[b[i]] < m[a[i]]) {
            return false;
        }
    }
    return ((int)a.size() < (int)b.size());
}

int main() {
    std::string order;
    int n;
    std::cin >> order >> n;
    std::string upperOrder = order;
    for (int i = 0; i < (int)order.size(); i++) {
        upperOrder[i] += 'A' - 'a';
    }
    order = order + upperOrder;
    for (int i = 0; i < (int)order.size(); i++) {
        m[order[i]] = i;
    }
    std::vector<std::string> str;
    for (int i = 0; i < n; i++) {
        std::string s;
        std::cin >> s;
        str.push_back(s);
    }
    std::sort(str.begin(), str.end(), cmp);
    for (auto itr = str.begin(); itr != str.end(); itr++) {
        std::cout << *itr << std::endl;
    }
    return 0;
}