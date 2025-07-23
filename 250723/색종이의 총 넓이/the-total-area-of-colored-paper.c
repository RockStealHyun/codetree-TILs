#include <stdio.h>

int main(void) {
    int N;
    int x, y;
    int board[201][201] = {0};   // 좌표 -100~100 → +100 해서 0~200 사용
    int area = 0;

    scanf("%d", &N);
    for (int k = 0; k < N; k++) {
        scanf("%d %d", &x, &y);          // 색종이의 좌하단 꼭짓점
        for (int i = x; i < x + 8; i++)   // 가로 8
            for (int j = y; j < y + 8; j++) // 세로 8
                board[i + 100][j + 100] = 1;
    }

    for (int i = 0; i <= 200; i++)
        for (int j = 0; j <= 200; j++)
            area += board[i][j];

    printf("%d\n", area);
    return 0;
}
