#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> array(n, 1), left(n), right(n);
    for (int i = 0; i < n; i++) {
        std::cin >> left[i];
    }
    if (left[0] < left[1]) {
        array[0] = 0;
    }
    std::cin >> right[0];
    for (int i = 1; i < n; i++) {
        std::cin >> right[i];
        if (right[i - 1] > right[i]) {
            array[i] = 0;
        }
        if (right[i] == 0) {
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        std::cout << array[i];
    }
    std::cout << std::endl;
    return 0;
}