#include <iostream>
#include <map>
#include <vector>
#include <cmath>

int main() {
    int n, m, output = 0;
    std::cin >> n >> m;
    std::vector<std::vector<int> > cat(n, std::vector<int>(2));
    std::map<int, int> map_cat;
    for (int i = 0; i < n; i++) {
        std::cin >> cat[i][0] >> cat[i][1];
    }
    for (int i = 0; i < m; i++) {
        int x_dog, y_dog, index_cat;
        std::cin >> x_dog >> y_dog;
        long distance = 1000000000;
        for (int j = 0; j < n; j++) {
            long tmp_distance = std::pow(x_dog - cat[j][0], 2.0) + std::pow(y_dog - cat[j][1], 2.0);
            if (tmp_distance < distance) {
                distance = tmp_distance;
                index_cat = j;
            }
        }
        map_cat[index_cat]++;
    }
    for (auto itr = map_cat.begin(); itr != map_cat.end(); itr++) {
        if (itr->second == 1) {
            output++;
        }
    }
    std::cout << output << std::endl;
    return 0;
}