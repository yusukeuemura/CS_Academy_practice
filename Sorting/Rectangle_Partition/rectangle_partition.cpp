#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main() {
    int h, w, n, m;
    long long output = 0ll;
    std::cin >> h >> w >> n >> m;
    std::vector<int> hor(n), ver(m);
    for (int i = 0; i < n; i++) {
        std::cin >> hor[i];
    }
    for (int i = 0; i < m; i++) {
        std::cin >> ver[i];
    }
    std::sort(hor.begin(), hor.end());
    std::sort(ver.begin(), ver.end());
    std::map<int, int> dis;
    dis[hor[0]]++;
    dis[h - hor[n - 1]]++;
    for (int i = 0; i < n - 1; i++) {
        dis[hor[i + 1] - hor[i]]++;
    }
    output += dis[ver[0]] + dis[w - ver[m - 1]];
    for (int i = 0; i < m - 1; i++) {
        output += dis[ver[i + 1] - ver[i]];
    }
    std::cout << output << std::endl;
    return 0;
}