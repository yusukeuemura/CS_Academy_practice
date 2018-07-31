#include <iostream>
#include <math.h>

int main() {
    int a, b;
    std::cout << "Put A and B: " << std::endl;
    std::cin >> a >> b;
    std::cout << "The answer is " << (int)sqrt(b) - (int)sqrt(a - 1) << std::endl;

    return 0;
}