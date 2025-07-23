#include <stdio.h>

int main(void) {
    int m1, d1, m2, d2;
    int md[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31}; // 2011년(평년)

    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);

    int s = d1, e = d2;
    for (int m = 1; m < m1; m++) s += md[m];   // 시작일까지 누적(포함)
    for (int m = 1; m < m2; m++) e += md[m];   // 끝일까지 누적(포함)

    printf("%d\n", e - s + 1);
    return 0;
}
