#include <iostream>
#include <map>
#include <algorithm>

int main() {
    int firstDice[6], secondDice[6];
    int freq = 0, output = 0;
    std::map<int, int> map;
    for (int i = 0; i < 6; i++) {
        std::cin >> firstDice[i];
    }
    for (int i = 0; i < 6; i++) {
        std::cin >> secondDice[i];
        for (int j = 0; j < 6; j++) {
            int addFaces;
            addFaces = firstDice[j] + secondDice[i];
            map[addFaces]++;
            if (freq < map[addFaces]) {
                freq = map[addFaces];
                output = addFaces;
            } else if (freq == map[addFaces]) {
                output = std::min(output, addFaces);
            }
        }
    }
    std::cout << output << std::endl;
}