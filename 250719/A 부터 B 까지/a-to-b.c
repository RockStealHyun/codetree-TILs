#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    while (A <= B) {
        printf("%d ", A);  // 출력 먼저 하고

        // 다음 A 값을 계산
        if (A % 2 == 1) {
            A *= 2;
        } else {
            A += 3;
        }

        // 근데 다음 A가 B보다 커지면 다음 루프에서 종료됨
    }

    return 0;
}
