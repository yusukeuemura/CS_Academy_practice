#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    double s, k;
    int q;
    std::cin >> s >> q >> k;
    std::vector<double> p(q);
    for (int i = 0; i < q; i++) {
        std::cin >> p[i];
    }
    std::sort(p.begin(), p.end());
    for (int i = 0; i < q; i++) {
        s = std::max(s + k, s * (1 + p[i] / 100));
    }
    std::cout.precision(11);
    std::cout << std::fixed << s << std::endl;
    return 0;
}