#include <iostream>
#include <map>
#include <algorithm>

int main() {
    int n, eraseSum = 0, sum = 0;
    std::map<int, int> array;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;       
        array[element]++;
        if (eraseSum < element * array[element]) {
            eraseSum = element * array[element];
        }
        sum += element;
    }
    std::cout << sum - eraseSum << std::endl;
}