#include <stdio.h>

int main(void) {
    int m1, d1, m2, d2;
    int md[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31}; // 2011년(평년)

    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);

    // m1/d1, m2/d2를 1월 1일부터 몇 번째 날인지로 변환
    int s = d1, t = d2;
    for (int i = 1; i < m1; i++) s += md[i];
    for (int i = 1; i < m2; i++) t += md[i];

    int diff = t - s;                     // 며칠 차이인지
    int idx = (diff % 7 + 7) % 7;         // 음수 보정

    const char *w[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    printf("%s\n", w[idx]);

    return 0;
}
