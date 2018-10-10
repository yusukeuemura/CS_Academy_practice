#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int driver[100][2];
    for (int i = 0; i < n; i++) {
        int p;
        std::cin >> p;
        driver[i][0] = i;
        driver[i][1] = p;
    }
    while (1) {
        int f = 0;
        for (int i = 0; i < n - 1; i++) {
            int d = driver[i][0], p = driver[i][1];
            int nd = driver[i + 1][0], np = driver[i + 1][1];
            if (nd + np < d + p || (nd + np == d + p && np < p)) {
                driver[i][0] = nd;
                driver[i][1] = np;
                driver[i + 1][0] = d;
                driver[i + 1][1] = p;
                f = 1;
            }
        }
        if (f == 0) {
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        std::cout << driver[i][0] + 1 << " ";
    }
    std::cout << std::endl;
    return 0;
}