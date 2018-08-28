#include <iostream>
#include <vector>

int main() {
    int n, m, check = -1;
    std::cin >> n >> m;
    std::vector<int> length(m);
    for (int i = 0; i < m; i++) {
        std::cin >> length[i];
    }
    std::vector<std::pair<int, int> > zone(n);
    for (int i = 0; i < m; i++) {
        static int l = 0;
        zone[i].first = l;
        zone[i].second = l + length[i];
        l += length[i];
    }
    for (int i = 0; i < m; i++) {
        if (zone[i].first < n / 2.0 && n / 2.0 < zone[i].second) {
            check = i + 1;
            break;
        }
    }
    std::cout << check << std::endl;
    return 0;
}