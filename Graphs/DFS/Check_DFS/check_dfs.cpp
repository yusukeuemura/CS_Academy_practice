#include <iostream>
#include <algorithm>
#include <vector>

const int Max = 1e5;
std::vector<int> orderV(Max);
std::vector<int> edgeList[Max + 1];
std::vector<int> checkList;
bool visitedList[Max + 1];

bool cmp(const int &a, const int &b) {
    return (orderV[a] < orderV[b]);
}

void dfs(int v) {
    checkList.push_back(v);
    visitedList[v] = true;
    for (auto itr : edgeList[v]) {
        if (visitedList[itr] != true) {
            dfs(itr);
        }
    }
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> p(n);
    for (int i = 0; i < n; i++) {
        int v;
        std::cin >> v;
        p[i] = v;
        orderV[v] = i;
    }
    for (int i = 0; i < m; i++) {
        int a, b;
        std::cin >> a >> b;
        edgeList[a].push_back(b);
        edgeList[b].push_back(a);
    }
    for (int i = 1; i <= n; i++) {
        std::sort(edgeList[i].begin(), edgeList[i].end(), cmp);
    }
    dfs(1);
    if (p == checkList) {
        std::cout << 1 << std::endl;
    } else {
        std::cout << 0 << std::endl;
    }
    return 0;
}