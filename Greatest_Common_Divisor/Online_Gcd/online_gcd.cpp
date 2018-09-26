#include <iostream>
#include <vector>

long long gcd(long long a, long long b);

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<long long> array(n);
    for (int i = 0; i < n; i++) {
        std::cin >> array[i];
    }
    long long gCD;
    if (n == 1) {
        gCD = array[0];
    } else if (array[0] < array[1]) {
        gCD = gcd(array[1], array[0]);
    } else {
        gCD = gcd(array[0], array[1]);
    }
    for (int i = 2; i < n; i++) {
        gCD < array[i] ? gCD = gcd(array[i], gCD) : gCD = gcd(gCD, array[i]);
    }
    for (int i = 0; i < m; i++) {
        int index;
        long long divisor;
        std::cin >> index >> divisor;
        index--;
        array[index] = array[index] / divisor;
        gCD < array[index] ? gCD = gcd(array[index], gCD) : gCD = gcd(gCD, array[index]);
        std::cout << gCD << std::endl;
    }
    return 0;
}

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}