#include <stdio.h>

// isTarget 함수: n이 조건에 맞으면 1, 아니면 0을 반환
int isTarget(int n) {
    // 1) 3의 배수인지 확인
    if (n % 3 == 0) {
        return 1;
    }
    // 2) 각 자리 숫자를 검사하여 3,6,9가 있는지 확인
    int x = n;
    while (x > 0) {
        int digit = x % 10;  // 마지막 자리 숫자
        if (digit == 3 || digit == 6 || digit == 9) {
            return 1;
        }
        x /= 10;  // 다음 자리로 이동
    }
    return 0;  // 둘 다 해당하지 않으면 0 반환
}

int main() {
    int A, B;
    // A와 B 입력
    scanf("%d %d", &A, &B);

    int count = 0;
    // A부터 B까지 하나씩 검사
    for (int i = A; i <= B; i++) {
        if (isTarget(i)) {
            count++;
        }
    }

    // 결과 출력
    printf("%d\n", count);
    return 0;
}
