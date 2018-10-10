#include <iostream>

int main() {
    std::cout << "Q 2" << std::endl;
    int p;
    std::cin >> p;
    if (p == 2) {
        std::cout << "A 4" << std::endl;
    } else if (p == 3) {
        std::cout << "A 8" << std::endl;
    } else if (p == 0) {
        std::cout << "Q 3" << std::endl;
        std::cin >> p;
        if (p == 1) {
            std::cout << "A 3" << std::endl;
        } else if (p == 2) {
            std::cout << "A 9" << std::endl;
        } else {
            std::cout << "Q 5" << std::endl;
            std::cin >> p;
            if (p == 1) {
                std::cout << "A 5" << std::endl;
            } else {
                std::cout << "Q 7" << std::endl;
                std::cin >> p;
                if (p == 0) {
                    std::cout << "A 1" << std::endl;
                } else {
                    std::cout << "A 7" << std::endl;
                }
            }
        }
    } else {
        std::cout << "Q 3" << std::endl;
        std::cin >> p;
        if (p == 1) {
            std::cout << "A 6" << std::endl;
        } else {
            std::cout << "Q 5" << std::endl;
            std::cin >> p;
            if (p == 0) {
                std::cout << "A 2" << std::endl;
            } else {
                std::cout << "A 10" << std::endl;
            }
        }
    }
    return 0;
}