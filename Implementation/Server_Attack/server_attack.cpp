#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int downtime = 0;
    int stat = 2, statMoment = 0;
    for (int i = 0; i < n; i++) {
        int curStat, curMoment;
        std::cin >> curStat >> curMoment;
        if (stat == 2) {
            stat = curStat;
            statMoment = curMoment;
        } else {
            if (curStat == 2) {
                stat = curStat;
                downtime += curMoment - statMoment;
            }
        }
    }
    std::cout << downtime << std::endl;
    return 0;
}