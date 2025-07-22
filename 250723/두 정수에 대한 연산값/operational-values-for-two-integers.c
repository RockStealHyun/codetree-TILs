#include <stdio.h>

void change(int *a, int *b) {
    if (*a > *b) {          // 큰 수에 +25, 작은 수는 /2
        *a += 25;
        *b /= 2;
    } else {
        *b += 25;
        *a /= 2;
    }
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    change(&a, &b);
    printf("%d %d", a, b);
    return 0;
}
