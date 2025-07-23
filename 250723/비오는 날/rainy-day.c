#include <stdio.h>
#include <string.h>

typedef struct {
    char date[11];    // yyyy-mm-dd
    char day[10];     // Mon, Tue ...
    char weather[10]; // Rain, Sunny ...
    int  key;         // 날짜 비교용 숫자
} Data;

int main(void) {
    int n;
    scanf("%d", &n);

    Data best;
    int found = 0;

    for (int i = 0; i < n; i++) {
        Data cur;
        scanf("%s %s %s", cur.date, cur.day, cur.weather);

        if (strcmp(cur.weather, "Rain") == 0) {
            int y, m, d;
            sscanf(cur.date, "%d-%d-%d", &y, &m, &d);
            cur.key = y * 10000 + m * 100 + d;   // 작은 값 = 더 가까운 날

            if (!found || cur.key < best.key) {
                best = cur;
                found = 1;
            }
        }
    }

    printf("%s %s %s\n", best.date, best.day, best.weather);
    return 0;
}
