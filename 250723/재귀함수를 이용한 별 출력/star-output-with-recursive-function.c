#include <stdio.h>

void print_tri(int n) {        // 1줄부터 n줄까지 별 출력
    if (n == 0) return;
    print_tri(n - 1);          // 먼저 위쪽 출력
    for (int i = 0; i < n; i++) putchar('*');
    putchar('\n');
}

int main(void) {
    int N;
    scanf("%d", &N);
    print_tri(N);
    return 0;
}
