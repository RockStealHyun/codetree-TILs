#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    // N×N 격자를 선언
    int a[10][10];  // N ≤ 10 이므로 충분

    // 1) 첫 번째 행과 첫 번째 열을 1로 초기화
    for (int i = 0; i < N; i++) {
        a[0][i] = 1;  // 첫째 행
        a[i][0] = 1;  // 첫째 열
    }

    // 2) 나머지 칸을 위 + 왼쪽 + 왼쪽위 합으로 채우기
    for (int i = 1; i < N; i++) {
        for (int j = 1; j < N; j++) {
            a[i][j] = a[i-1][j]    // 바로 위
                     + a[i][j-1]  // 바로 왼쪽
                     + a[i-1][j-1]; // 왼쪽 위
        }
    }

    // 3) 결과 출력 (행마다 공백으로 구분)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d", a[i][j]);
            if (j < N - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
