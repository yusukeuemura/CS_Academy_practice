#include <iostream>
#include <map>

int main() {
    int n, output = 0;
    std::cin >> n;
    std::map<int, int> missedSheets;
    for (int i = 0; i < n; i++) {
        int missedPage;
        std::cin >> missedPage;
        missedSheets[(missedPage - 1) / 2]++;
    }
    for (auto itr = missedSheets.begin(); itr != missedSheets.end(); itr++) {
        if (itr->second) {
            output++;
        }
    }
    std::cout << output << std::endl;
    return 0;
}