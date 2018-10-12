#include <iostream>
#include <map>

int main() {
    int q, x;
    std::cin >> q >> x;
    std::map<int, int> anb;
    for (int i = 0; i < q; i++) {
        int a, b;
        std::cin >> a >> b;
        if (anb[b - a] > 0) {
            if (a < anb[b - a]) {
                anb[b - a] = a;
            }
        } else {
            anb[b - a] = a;
        }
    }
    for (int i = 0; i < 12; i++) {
        for (auto itr = anb.rbegin(); itr != anb.rend(); itr++) {
            if (itr->second <= x) {
                x += itr->first;
                break;
            }
        }
    }
    std::cout << x << std::endl;
    return 0;
}