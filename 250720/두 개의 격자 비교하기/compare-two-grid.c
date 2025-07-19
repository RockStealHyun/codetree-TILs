#include <stdio.h>

int main() {
    int N, M;
    int a[10][10], b[10][10], result[10][10];
    int i, j;

    // N: 행 개수, M: 열 개수 입력
    scanf("%d %d", &N, &M);

    // 첫 번째 격자 입력
    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // 두 번째 격자 입력
    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // 두 격자 비교 후 결과 격자 저장
    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            if(a[i][j] == b[i][j]) {
                result[i][j] = 0;
            } else {
                result[i][j] = 1;
            }
        }
    }

    // 결과 출력
    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            printf("%d", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
