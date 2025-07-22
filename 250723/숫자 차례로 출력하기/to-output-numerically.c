#include <stdio.h>

void up(int n) {          // 1 ~ n
    if (n == 0) return;
    up(n - 1);
    printf("%d ", n);
}

void down(int n) {        // n ~ 1
    if (n == 0) return;
    printf("%d ", n);
    down(n - 1);
}

int main(void) {
    int N;
    scanf("%d", &N);

    up(N);
    printf("\n");
    down(N);

    return 0;
}
