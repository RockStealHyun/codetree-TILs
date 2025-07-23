#include <stdio.h>

int main(void) {
    int N, l, r;
    int cnt[101] = {0};   // 좌표 1~100

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &l, &r);
        for (int x = l; x <= r; x++)    // 끝점도 겹침으로 포함
            cnt[x]++;
    }

    int mx = 0;
    for (int x = 1; x <= 100; x++)
        if (cnt[x] > mx) mx = cnt[x];

    printf("%d\n", mx);
    return 0;
}
