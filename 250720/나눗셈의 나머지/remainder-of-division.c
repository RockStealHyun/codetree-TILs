#include <stdio.h>

int main(void) {
    int A, B;
    scanf("%d %d", &A, &B);

    int count[10] = {0};  // B ≤ 10이므로 0~9까지 충분
    // A가 1보다 클 동안 나눗셈을 반복
    while (A > 1) {
        int r = A % B;    // 나머지
        count[r]++;       // 해당 나머지 개수 증가
        A = A / B;        // 몫을 다시 A에 저장
    }

    // 등장 횟수의 제곱을 더해서 출력
    int sum = 0;
    for (int i = 0; i < B; i++) {
        sum += count[i] * count[i];
    }

    printf("%d\n", sum);
    return 0;
}
