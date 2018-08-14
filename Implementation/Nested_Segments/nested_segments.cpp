#include <iostream>
#include <vector>

int main() {
    int n, output = 0;
    std::cin >> n;
    std::vector<std::vector<int> > segments(n, std::vector<int>(2));
    int nestedSegments[100] = {0};
    for (int i = 0; i < n; i++) {
        std::cin >> segments[i][0] >> segments[i][1];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (segments[i][0] < segments[j][0] && segments[j][1] < segments[i][1]) {
                nestedSegments[j] = 1;
            } else if (segments[j][0] < segments[i][0] && segments[i][1] < segments[j][1]) {
                nestedSegments[i] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        output += nestedSegments[i];
    }
    std::cout << output << std::endl;
    return 0;
}