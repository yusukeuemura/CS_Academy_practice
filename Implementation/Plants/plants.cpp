#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m, survive = 0;
    std::cin >> n >> m;
    std::vector<int> rooms(m);
    for (int i = 0; i < m; i++) {
        std::cin >> rooms[i];
    }
    std::sort(rooms.begin(), rooms.end());

    for (int i = 0; i < n; i++) {
        int lBound, uBound;
        std::cin >> lBound >> uBound;
        for (int j = 0; j < m; j++) {
            if ((lBound <= rooms[j]) && (rooms[j] <= uBound)) {
                survive++;
            }
        }
        std::cout << survive << std::endl;
        survive = 0;
    }

    return 0;
}