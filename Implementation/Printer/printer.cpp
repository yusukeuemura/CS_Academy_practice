#include <iostream>

const int MAXVALUE = 1e9;

int main() {
    long long int cartridges[4], price[4], bundle;
    for (int i = 0; i < 4; i++) {
        std::cin >> cartridges[i];
    }
    for (int i = 0; i < 4; i++) {
        std::cin >> price[i];
    }
    std::cin >> bundle;
    long long int buy = 0;
    while (1) {
        long long int eachSum = 0LL;
        long long int m = MAXVALUE + 1;
        for (int i = 0; i < 4; i++) {
            if (cartridges[i] > 0) {
                eachSum += price[i];
                if (cartridges[i] < m) {
                    m = cartridges[i];
                }
            }
        }
        if (eachSum < bundle) {
            break;
        }
        buy += bundle * m;
        for (int i = 0; i < 4; i++) {
            if (cartridges[i] > 0) {
                cartridges[i] -= m;
            }
        }
    }
    for (int i = 0; i < 4; i++) {
        buy += cartridges[i] * price[i];
    }
    std::cout << buy << std::endl;
    return 0;
}