#include <stdio.h>

int main() {
    int n;
    int i;
    int cnt = 0;

    // 정수 n 입력 받기
    scanf("%d", &n);

    // 1부터 차례대로 나누기 시작
    for (i = 1; i <= n; i++) {
        int quotient = n / i;  // n을 i로 나눈 몫

        if (quotient <= 1) {  // 몫이 1 이하일 때 멈추기
            cnt++;  // 마지막 나눗셈도 포함
            break;
        }

        cnt++;  // 나눗셈 횟수 증가
    }

    // 나눗셈이 몇 번 진행되었는지 출력
    printf("%d\n", cnt);

    return 0;
}