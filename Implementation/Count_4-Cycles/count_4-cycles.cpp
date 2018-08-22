#include <iostream>
#include <set>
#include <utility>

int main() {
    int n, output = 0;
    std::cin >> n;
    std::set<std::pair<int, int> > t;
    for (int i = 1; i < n; i++) {
        int e1, e2;
        std::cin >> e1 >> e2;
        if (e1 > e2) {
            t.insert(std::make_pair(e2 - 1, e1 - 1));
        } else {
            t.insert(std::make_pair(e1 - 1, e2 - 1));
        }
    }
    for (int i = 1; i < n; i++) {
        int e1, e2;
        std::cin >> e1 >> e2;
        if (e1 > e2) {
            int tmp;
            tmp = e1;
            e1 = e2;
            e2 = tmp;
        }
        if (t.count(std::make_pair(e1 - 1, e2 - 1))) {
            output++;
        }
    }
    std::cout << output << std::endl;
    return 0;
}