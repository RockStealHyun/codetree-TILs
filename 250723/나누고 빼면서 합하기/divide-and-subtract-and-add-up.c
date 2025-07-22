#include <stdio.h>

int next_m(int m) {                 // 다음 M 계산
    return (m % 2 == 0) ? m / 2 : m - 1;
}

int solve(int A[], int M) {         // M번째 원소들을 더함
    int sum = 0;
    while (1) {
        sum += A[M];                // 1-based
        if (M == 1) break;
        M = next_m(M);
    }
    return sum;
}

int main(void) {
    int N, M, A[101];
    scanf("%d %d", &N, &M);
    for (int i = 1; i <= N; i++) scanf("%d", &A[i]);

    printf("%d", solve(A, M));
    return 0;
}
