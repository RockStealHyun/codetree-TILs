#include <stdio.h>

int main(void) {
    int A1, A2;
    // 첫 번째와 두 번째 항 입력
    scanf("%d %d", &A1, &A2);

    // 10개 항을 저장할 배열
    int seq[10];
    seq[0] = A1;   // A₁
    seq[1] = A2;   // A₂

    // 세 번째 항부터 Aₙ = Aₙ₋₁ + 2*Aₙ₋₂ 계산
    for (int i = 2; i < 10; i++) {
        seq[i] = seq[i - 1] + 2 * seq[i - 2];
    }

    // 계산된 10개 항을 공백으로 구분해 출력
    for (int i = 0; i < 10; i++) {
        printf("%d", seq[i]);
        if (i < 9) {
            printf(" ");
        }
    }
    return 0;
}
