#include <iostream>
#include <string>
#include <map>
#include <vector>

int main() {
    int n, check = 1, output = 0;
    std::cin >> n;
    std::vector<std::string> strList(n);
    std::map<char, int> mapFront, mapWord;
    for (int i = 0; i < n; i++) {
        std::cin >> strList[i];
        mapFront[strList[i].front()]++;
    }
    for (int i = 0; i < n; i++) {
        mapFront[strList[i].front()]--;
        for (int j = 0; j < (int)strList[i].size(); j++) {
            mapWord[strList[i][j]]++;
            if (mapWord[strList[i][j]] > mapFront[strList[i][j]]) {
                check = 0;
                break;
            }
        }
        if (check) {
            output++;
        }
        mapFront[strList[i].front()]++;
        mapWord.clear();
        check = 1;
    }
    std::cout << output << std::endl;
    return 0;
}