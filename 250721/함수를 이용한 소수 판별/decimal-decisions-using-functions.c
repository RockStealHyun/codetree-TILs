#include <stdio.h>

// isPrime 함수: n이 소수이면 1을, 아니면 0을 반환합니다.
int isPrime(int n) {
    if (n < 2) {
        return 0;           // 2보다 작은 수는 소수가 아님
    }
    // 2부터 sqrt(n)까지 나눠보기
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;       // 나누어 떨어지면 소수가 아님
        }
    }
    return 1;               // 위 조건을 모두 통과하면 소수
}

int main() {
    int A, B;
    // A와 B를 입력받습니다.
    scanf("%d %d", &A, &B);

    int sum = 0;
    // A부터 B까지 모든 수를 검사
    for (int x = A; x <= B; x++) {
        // isPrime(x)가 1이면 소수이므로 sum에 더함
        if (isPrime(x)) {
            sum += x;
        }
    }

    // 최종 합계를 출력
    printf("%d\n", sum);

    return 0;
}
