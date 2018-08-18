#include <iostream>
#include <string>

int main() {
    int n, adjacent = 0;
    std::cin >> n;
    std::string str;
    std::cin >> str;
    for (int i = 0; i < n - 1; i++) {
        switch (str[i]) {
            case 'a' :
            case 'i' :
            case 'u' :
            case 'e' :
            case 'o' :
                switch (str[i + 1]) {
                    case 'a' :
                    case 'i' :
                    case 'u' :
                    case 'e' :
                    case 'o' :
                        adjacent++;
                        break;
                    default :
                        i++;
                }
        }
    }
    std::cout << adjacent << std::endl;
    return 0;
}