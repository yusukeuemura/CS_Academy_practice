#include <iostream>
#include <algorithm>


int main() {
    const int MAXSIZE_OF_SHOE = 100;

    int shoePairs = 0;
    int shoeArray[MAXSIZE_OF_SHOE + 1][2] = {0};
    int n, sizeOfShoe;
    char lR;

    std::cout << "Put the number of shoes: ";
    std::cin >> n;

    for (int i = 0; n > i; i++) {
        std::cin >> sizeOfShoe >> lR;
        if (lR == 'L') {
            shoeArray[sizeOfShoe][0] = 1;
        } else {
            shoeArray[sizeOfShoe][1] = 1;
        }
    }

    for (int i = 1; MAXSIZE_OF_SHOE >= i; i++) {
        shoePairs += std::min(shoeArray[i][0], shoeArray[i][1]);
    }

    std::cout << "the max number of shoe pairs is " << shoePairs << std::endl;
    return 0;
}