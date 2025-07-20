#include <stdio.h>
#include <string.h>

int main(void) {
    char A[101], B[101];
    // A, B 입력
    scanf("%100s %100s", A, B);

    int n = strlen(A);
    int answer = -1;

    // N번 우측 회전했을 때 B가 되는지 확인
    for (int N = 1; N <= n; N++) {
        int match = 1;
        // B[i]와 A[(i-N+n)%n]가 모두 일치해야 함
        for (int i = 0; i < n; i++) {
            int idx = (i - N + n) % n;
            if (B[i] != A[idx]) {
                match = 0;
                break;
            }
        }
        if (match) {
            answer = N;
            break;
        }
    }

    printf("%d\n", answer);
    return 0;
}
