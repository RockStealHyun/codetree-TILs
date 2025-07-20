#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N;
    scanf("%d", &N);

    // 동적 할당: N×N 격자 만들기
    int **a = malloc(N * sizeof(int*));
    for (int i = 0; i < N; i++) {
        a[i] = malloc(N * sizeof(int));
    }

    int num = 1;
    // 맨 오른쪽 열부터 왼쪽 열로 한 칸씩 이동
    for (int col = N - 1; col >= 0; col--) {
        // zigzag: (N-1-col)가 짝수면 아래→위, 홀수면 위→아래
        if ((N - 1 - col) % 2 == 0) {
            // 아래(행=N-1)에서 위(행=0)로
            for (int row = N - 1; row >= 0; row--) {
                a[row][col] = num++;
            }
        } else {
            // 위(행=0)에서 아래(행=N-1)로
            for (int row = 0; row < N; row++) {
                a[row][col] = num++;
            }
        }
    }

    // 격자 출력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d", a[i][j]);
            if (j < N - 1) printf(" ");
        }
        printf("\n");
    }

    // 메모리 해제
    for (int i = 0; i < N; i++) {
        free(a[i]);
    }
    free(a);

    return 0;
}
