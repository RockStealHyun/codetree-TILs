#include <stdio.h>

int main(void) {
    int N, M;
    // 격자 크기 N과 점 개수 M 입력
    scanf("%d %d", &N, &M);

    // N×N 격자를 0으로 초기화
    int grid[10][10] = {0};

    // M개의 점 정보를 읽어서 해당 칸에 크기(r*c)를 저장
    for (int i = 0; i < M; i++) {
        int r, c;
        scanf("%d %d", &r, &c);
        // 배열은 0부터 시작하니까 인덱스는 r-1, c-1
        grid[r-1][c-1] = r * c;
    }

    // 결과 출력: 행마다 공백으로 구분
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d", grid[i][j]);
            if (j < N - 1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
