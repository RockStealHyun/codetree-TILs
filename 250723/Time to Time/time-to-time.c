#include <stdio.h>

int main(void) {
    int A, B, C, D;          // 시작 시각 A:B, 끝 시각 C:D
    scanf("%d %d %d %d", &A, &B, &C, &D);

    int start = A * 60 + B;
    int end   = C * 60 + D;

    printf("%d\n", end - start);
    return 0;
}
