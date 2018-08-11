#include <iostream>

int main() {
    const int Max_Number_Of_Elements = 1000;
    int k, n, result = 0;
    int array[Max_Number_Of_Elements + 1] = {0};
    std::cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        array[element]++;
    }
    for (int i = 1; i <= Max_Number_Of_Elements; i++) {
        if (array[i] >= k) {
            result++;
        }
    }
    std::cout << result << std::endl;

    return 0;
}