#include <stdio.h>

// 1부터 N까지 더한 합을 10으로 나눈 나머지를 반환하는 함수
int sumMod10(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += i;         // 1부터 i까지 계속 더함
    }
    return sum % 10;      // 10으로 나눈 나머지 반환
}

int main(void) {
    int N;
    // 사용자로부터 정수 하나 입력받기
    scanf("%d", &N);

    // 함수 호출해서 결과 계산 후 출력
    printf("%d\n", sumMod10(N));
    return 0;
}
