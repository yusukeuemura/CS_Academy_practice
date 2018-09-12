#include <iostream>
#include <map>

int main() {
    int n, m, ans = 1;
    std::cin >> n >> m;
    std::map<int ,int> a, frow, lrow, fcolumn, lcolumn;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int element;
            std::cin >> element;
            a[element]++;
            if (a[element] == 1) {
                fcolumn[element] = i;
                frow[element] = j;
            }
            lcolumn[element] = i;
            if (lrow[element] < j) {
                lrow[element] = j;
            }
        }
    }
    for (auto itr = a.begin(); itr != a.end(); itr++) {
        int height = lcolumn[itr->first] - fcolumn[itr->first] + 1;
        int width = lrow[itr->first] - frow[itr->first] + 1;
        if (height != width || height * width != a[itr->first]) {
            ans = 0;
            break;
        }
    }
    std::cout << ans << std::endl;
    return 0;
}