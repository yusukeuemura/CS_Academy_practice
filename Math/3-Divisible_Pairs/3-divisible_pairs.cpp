#include <iostream>

int main() {
    const int MAXN = 100000;
    int n;
    int result = 0;
    std::cin >> n;
    int arrayOfElements[MAXN] = {0};
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        arrayOfElements[i] = element; 
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sumOfPair;
            sumOfPair = arrayOfElements[i] + arrayOfElements[j];
            if (sumOfPair % 3 == 0) {
                result++;
            }
        }
    }

    std::cout << "The number of pairs is " << result << std::endl;
    return 0;
}