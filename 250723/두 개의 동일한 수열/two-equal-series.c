#include <stdio.h>

int same_set(int A[], int B[], int n) {
    int cnt[101] = {0};        // 값 범위: 1~100
    for (int i = 0; i < n; i++) {
        cnt[A[i]]++;           // A에 있으면 +
        cnt[B[i]]--;           // B에 있으면 -
    }
    for (int i = 1; i <= 100; i++)
        if (cnt[i] != 0) return 0;  // 하나라도 다르면 실패
    return 1;
}

int main(void) {
    int n, A[100], B[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);
    for (int i = 0; i < n; i++) scanf("%d", &B[i]);

    printf(same_set(A, B, n) ? "Yes" : "No");
    return 0;
}
