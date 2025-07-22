#include <stdio.h>

int is_leap(int y) { // 윤년?
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int valid(int y, int m, int d) { // 날짜 존재?
    int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (m < 1 || m > 12) return 0;
    if (m == 2 && is_leap(y)) days[2] = 29;
    return d >= 1 && d <= days[m];
}

const char* season(int m) { // 계절
    if (3 <= m && m <= 5)  return "Spring";
    if (6 <= m && m <= 8)  return "Summer";
    if (9 <= m && m <= 11) return "Fall";
    return "Winter"; // 12,1,2
}

int main(void) {
    int Y, M, D;
    scanf("%d %d %d", &Y, &M, &D);

    if (valid(Y, M, D))  printf("%s", season(M));
    else                 printf("-1");

    return 0;
}
