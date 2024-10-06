#include <stdio.h>

int main() {
    double n;  // 실수형 변수로 변경, 나눗셈 결과를 저장하기 위해
    int i = 1; // 나눗셈에 사용할 값
    int cnt = 0;  // 나눗셈 횟수를 저장할 변수

    // 정수 n 입력 받기
    scanf("%lf", &n);  // 실수 입력 받기

    // n을 1부터 차례대로 나누기
    while (n > 1) {
        n = n / (double)i;  // n을 i로 나누되, 실수형 연산
        cnt++;  // 나눗셈 진행 횟수 증가
        i++;  // 다음 나누기 값 증가
    }

    // 총 나눗셈 횟수 출력
    printf("%d\n", cnt);

    return 0;
}