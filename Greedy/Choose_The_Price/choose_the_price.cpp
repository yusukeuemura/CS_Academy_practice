#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> clients(n, 0);
    for (int i = 0; i < n; i++) {
        std::cin >> clients[i];
    }
    std::sort(clients.begin(), clients.end());
    long long output = 0;
    for (int i = 0; i < n; i++) {
        if (clients[i] * (n - i) > output) {
            output = clients[i] * (n - i);
        }
    }
    std::cout << output << std::endl;
    return 0;
}