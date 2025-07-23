#include <stdio.h>

int main(void) {
    int N;
    int board[201][201] = {0};   // 좌표 -100~100 → +100 해서 0~200 사용
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        int color = (i % 2 == 0) ? 1 : 2; // 1:빨강, 2:파랑 (0번째가 첫 직사각형)

        for (int x = x1; x < x2; x++)
            for (int y = y1; y < y2; y++)
                board[x + 100][y + 100] = color; // 마지막에 덮인 색으로 덮기
    }

    int blue = 0;
    for (int i = 0; i <= 200; i++)
        for (int j = 0; j <= 200; j++)
            if (board[i][j] == 2) blue++;

    printf("%d\n", blue);
    return 0;
}
