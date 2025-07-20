#include <stdio.h>

// 1부터 N까지 합한 뒤 10으로 나눈 몫을 반환하는 함수
int sumQuotientBy10(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += i;            // 1부터 i까지 계속 더하기
    }
    return sum / 10;         // 10으로 나눈 몫만 반환 (나머지 버림)
}

int main(void) {
    int N;
    scanf("%d", &N);                             // 정수 하나 입력
    printf("%d\n", sumQuotientBy10(N));          // 함수 호출 후 결과 출력
    return 0;
}
