#include <stdio.h>

void make_abs(int a[], int n) {      // 절댓값으로 바꾸기 (반환 X)
    for (int i = 0; i < n; i++)
        if (a[i] < 0) a[i] = -a[i];
}

int main(void) {
    int N, x[50];
    scanf("%d", &N);
    for (int i = 0; i < N; i++) scanf("%d", &x[i]);

    make_abs(x, N);

    for (int i = 0; i < N; i++) {
        if (i) printf(" ");
        printf("%d", x[i]);
    }
    return 0;
}
