#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);  // N과 M 입력 받기

    while (N > 0) {
        printf("%d\n", N);   // 현재 N 출력
        N = N / M;           // N을 M으로 나눈 몫으로 갱신
    }

    return 0;
}
