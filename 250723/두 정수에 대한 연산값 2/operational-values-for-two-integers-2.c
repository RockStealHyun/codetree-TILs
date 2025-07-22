#include <stdio.h>

void change(int *a, int *b) {   // 작은 수 +10, 큰 수 ×2
    if (*a < *b) { *a += 10; *b *= 2; }
    else         { *b += 10; *a *= 2; }
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    change(&a, &b);
    printf("%d %d", a, b);
    return 0;
}
