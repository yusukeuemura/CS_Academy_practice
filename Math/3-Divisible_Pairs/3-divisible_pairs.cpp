#include <iostream>

int main() {
    int n;
    std::cin >> n;
    long long int arrayOfElements[3] = {0};
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        arrayOfElements[element%3]++;
    }
    std::cout << arrayOfElements[0] * (arrayOfElements[0] - 1) / 2 
                + arrayOfElements[1] * arrayOfElements[2] << std::endl;
    return 0;
}