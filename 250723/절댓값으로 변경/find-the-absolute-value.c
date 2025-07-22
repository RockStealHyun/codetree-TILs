#include <stdio.h>

void change(int *a, int *b) {
    if (*a > *b) {        // a가 더 큼
        *a += 25;
        *b *= 2;
    } else {              // b가 더 큼
        *b += 25;
        *a *= 2;
    }
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    change(&a, &b);
    printf("%d %d", a, b);
    return 0;
}
