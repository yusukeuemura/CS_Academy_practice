#include <iostream>

int main() {
    int n;
    std::cin >> n;
    long long a[5001];
    for (int i = 0; i <= 5000; i++) {
        a[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        a[element]++;
    }
    long long output = a[0] * (a[0] - 1) * (a[0] - 2) / 6;
    for (int i = 1; i <= 5000; i++) {
        output += a[0] * a[i] * (a[i] - 1) / 2;
    }
    for (int i = 1; i <= 2500; i++) {
        output += a[i] * (a[i] - 1) * a[2 * i] / 2; 
    }
    for (int i = 1; i <= 5000; i++) {
        for (int j = i + 1; i + j <= 5000; j++) {
            output += a[i] * a[j] * a[i + j];
        }
    }
    std::cout << output << std::endl;
    return 0;
}