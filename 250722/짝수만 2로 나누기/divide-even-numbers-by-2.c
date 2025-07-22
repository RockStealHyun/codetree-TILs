#include <stdio.h>

void half_even(int a[], int n) {   // 짝수만 2로 나누기
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0) a[i] /= 2;
}

int main(void) {
    int N, x[50];
    scanf("%d", &N);
    for (int i = 0; i < N; i++) scanf("%d", &x[i]);

    half_even(x, N);               // 값 바뀜 (반환 X)

    for (int i = 0; i < N; i++) {
        if (i) printf(" ");
        printf("%d", x[i]);
    }
    return 0;
}
