#include <iostream>

int main() {
    int n, subarray = 5000;
    std::cin >> n;
    int a[5001];
    int min = 2000000000, max = -1;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        if (a[i] < min) {
            min = a[i];
        } 
        if (a[i] > max) {
            max = a[i];
        }
    }
    for (int start = 0, end = -1; start < n; start++) {
        static int ctr_min = 0, ctr_max = 0;
        while ((ctr_min <= 0 || ctr_max <= 0) && end < n - 1) {
            end++;
            if (a[end] == max) {
                ctr_max++;
            }
            if (a[end] == min) {
                ctr_min++;
            }
        }
        if (end - start + 1 < subarray) {
            subarray = end - start + 1;
        }
        if (a[start] == min) {
            ctr_min--;
        }
        if (a[start] == max) {
            ctr_max--;
        }
        if ((ctr_min <= 0 || ctr_max <= 0) && end >= n - 1) {
            break;
        }
    }
    std::cout << subarray << std::endl;
    return 0;
}