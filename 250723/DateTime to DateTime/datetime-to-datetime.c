#include <stdio.h>

int main(void) {
    int A, B, C;                 // A일 B시 C분
    scanf("%d %d %d", &A, &B, &C);

    int diff = (A - 11) * 24 * 60 + (B - 11) * 60 + (C - 11);

    if (diff < 0) printf("-1\n");
    else          printf("%d\n", diff);

    return 0;
}
