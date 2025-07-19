#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    while (A < B) {
        printf("%d ", A);

        if (A % 2 == 1) {
            A *= 2;       // 홀수면 2배
        } else {
            A += 3;       // 짝수면 +3
        }
    }

    return 0;
}
