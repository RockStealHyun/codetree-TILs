#include <stdio.h>

int main() {
    int n;
    int i;
    int cnt = 0;   // 나눗셈 진행 횟수 저장

    // 정수 n 입력 받기
    scanf("%d", &n);

    // 1부터 차례대로 n을 나누기
    for (i = 1; i <= n; i++) {
        int quotient = n / i;  // n을 i로 나눈 몫 저장
        cnt++;  // 나눗셈 진행 횟수 증가

        if (quotient <= 1) {  // 몫이 1 이하가 되면 종료
            break;
        }
    }

    // 총 나눗셈 횟수 출력
    printf("%d\n", cnt);

    return 0;
}