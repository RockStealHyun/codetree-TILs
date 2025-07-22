#include <stdio.h>

int exist(int m, int d) {          // 2021년 달력에 있나?
    int days[13] = {0, 31,28,31,30,31,30,31,31,30,31,30,31}; // 2월 28일
    if (m < 1 || m > 12) return 0;
    if (d < 1 || d > days[m]) return 0;
    return 1;
}

int main(void) {
    int M, D;
    scanf("%d %d", &M, &D);
    printf(exist(M, D) ? "Yes" : "No");
    return 0;
}
