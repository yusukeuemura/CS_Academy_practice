#include <iostream>
#include <algorithm>
#include <cstdlib>

int main() {
    int milk, bread, me;
    std::cin >> milk >> bread >> me;
    std::cout << std::min(std::abs(milk - me), std::abs(bread - me)) + std::abs(milk - bread) << std::endl;
    return 0;
}