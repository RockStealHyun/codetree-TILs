#include <stdio.h>

int A[105];                 // 전역 배열

int seg_sum(int l, int r) { // l~r 합
    int s = 0;
    for (int i = l; i <= r; i++) s += A[i];
    return s;
}

int main(void) {
    int N, M;
    scanf("%d %d", &N, &M);
    for (int i = 1; i <= N; i++) scanf("%d", &A[i]);

    for (int i = 0; i < M; i++) {
        int a1, a2;
        scanf("%d %d", &a1, &a2);
        printf("%d\n", seg_sum(a1, a2));
    }
    return 0;
}
