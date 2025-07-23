#include <stdio.h>

int main(void){
    int N, T;
    scanf("%d %d", &N, &T);

    int ans = 0, cur = 0, x;
    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        if (x > T) {          // 조건 만족
            cur++;
            if (cur > ans) ans = cur;
        } else {              // 끊김
            cur = 0;
        }
    }

    printf("%d\n", ans);
    return 0;
}
