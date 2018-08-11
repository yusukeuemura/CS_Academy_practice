#include <iostream>
#include <string>

void quickSort(std::string *b, std::string *e) {
    if (b == e) {
        return;
    }
    std::string *l = b;
    std::string *r = e-1;
    std::string *s = b;
    std::cout << *l << "," << *r << "," << s[0] << std::endl;
    std::string tmp;
    /*while (l < r) {
        while (*r > *b) {
            r--;
        }
        while (*l <= *b && l < r) {
            l++;
        }
        tmp = *l;
        *l = *b;
        *b = tmp;
    }
    /*quickSort(b, l - 1);
    quickSort(r + 1, e);*/
}

int main() {
    std::string str;
    std::string *pstr;
    std::cin >> str;
    pstr = &str;
    quickSort(pstr, (pstr + pstr->size() - 1));
    std::cout << *pstr << std::endl;

    return 0;
}