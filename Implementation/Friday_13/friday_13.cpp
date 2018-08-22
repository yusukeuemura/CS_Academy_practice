#include <iostream>
#include <string>

int main() {
    int output = 0;
    std::string week[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int endOfMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::string januaryFirst;
    std::cin >> januaryFirst;
    int t;
    for (int i = 0; i < 7; i++) {
        if (januaryFirst == week[i]) {
            t = i;
            break;
        }
    }
    for (int i = 0; i < 12; i++) {
        for (int j = 1; j <= endOfMonth[i]; j++) {
            if (j == 13 && t == 4) {
                output++;
            }
            t = (t + 1) % 7;
        }
    }
    std::cout << output << std::endl;
    return 0;
}