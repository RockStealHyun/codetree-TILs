#include <stdio.h>

int main(void) {
    int N, x, prev, cur = 0, best = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        if (i == 0 || x != prev) {   // 처음이거나 값이 바뀌면 새로 시작
            cur = 1;
            prev = x;
        } else {                     // 같으면 길이 늘리기
            cur++;
        }
        if (cur > best) best = cur;  // 최대값 갱신
    }

    printf("%d\n", best);
    return 0;
}
