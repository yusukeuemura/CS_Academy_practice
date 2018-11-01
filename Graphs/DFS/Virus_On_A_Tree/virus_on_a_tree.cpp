#include <iostream>
#include <vector>
#include <algorithm>

const int Max = 1e5;
std::vector<std::pair<int, int> > edgeList[Max + 1];
std::vector<int> childNum;
bool visitedList[Max + 1];

bool cmp(const int &a, const int &b) {
    return (a > b);
}

int dfs(bool isSubgraph, int second, int first) {
    visitedList[first] = true;
    int sum = 0;
    bool cuttable = false;
    if (not isSubgraph && (second == 1)) {
        isSubgraph = true;
        cuttable = true;
    }
    for (auto itr : edgeList[first]) {
        if (visitedList[itr.first] == false) {
            sum += dfs(isSubgraph, itr.second, itr.first);
        }
    }
    sum++;
    if (cuttable) {
        childNum.push_back(sum);
    }
    return sum;
}

int main() {
    int n, k;
    std::cin >> n >> k;
    for (int i = 0; i < n - 1; i++) {
        int a, b, c;
        std::cin >> a >> b >> c;
        edgeList[a].push_back({b, c});
        edgeList[b].push_back({a, c});
    }
    dfs(false, 0, 1);
    std::sort(childNum.begin(), childNum.end(), cmp);
    int cnt = 0;
    while (n > k && cnt < (int)childNum.size()) {
        n -= childNum[cnt];
        cnt++;
    }
    if (n > k) {
        std::cout << -1 << std::endl;
    } else {
        std::cout << cnt << std::endl;
    }
    return 0;
}