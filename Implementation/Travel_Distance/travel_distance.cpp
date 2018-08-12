#include <iostream>
#include <cstdlib>
#include <string>

int main() {
    int ns = 0, ew = 0;
    std::string moves;
    std::cin >> moves;
    for (int i = 0; i < (int)moves.size(); i++) {
        switch(moves[i]) {
            case 'N' :
                ns++;
                break;
            case 'S' :
                ns--;
                break;
            case 'E' :
                ew++;
                break;
            case 'W' :
                ew--;
        }
    }
    std::cout << std::abs(ns) + std::abs(ew) << std::endl;
    return 0;
}