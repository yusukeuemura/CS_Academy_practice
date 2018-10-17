#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    long long output = 0;
    std::vector<int> a(n + 1, 0);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];   
    }
    int p1 = 0, p2 = 0;
    while (p1 < n) {
        if (a[p1] == 0) {
            p1++;
            continue;
        } else {
            while (p2 < p1 || a[p2] != 0) {
                p2++;
            }
            output += p2 - p1;
            p1++;
        }
    }
    std::cout << output << std::endl;
    return 0;
}