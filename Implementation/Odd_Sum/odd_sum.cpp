#include <iostream>

int main() {
    int n;
    int oddNumbers = 0;
    int evenNumbers = 0;

    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        if (element % 2 == 0) {
            evenNumbers++;
        } else {
            oddNumbers++;
        }
    }

    std::cout << "The answer is " << evenNumbers * oddNumbers << std::endl;
    return 0;
}